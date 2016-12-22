#include "Header/EvaluateVisitor.h"
#include "Header/PostorderIterator.h"
#include "Header/Variable.h"
#include "Header/Assign.h"
#include "Header/Const.h"


EvaluateVisitor::EvaluateVisitor(){

}

int EvaluateVisitor::GetResult(){
    return _stack.top();
}

bool EvaluateVisitor::GetExecuteRight(){
    bool tmp = _executeRight;
    _executeRight = true;
    return tmp;
}

void EvaluateVisitor::VisitSub(Sub *term){
    if(_state != 3)
        return;
    int rechts = _stack.top();
    _stack.pop();
    int links = _stack.top();
    _stack.pop();
    _stack.push(links - rechts);
}

void EvaluateVisitor::VisitMul(Mul *term){
    if(_state != 3)
        return;
    int rechts = _stack.top();
    _stack.pop();
    int links = _stack.top();
    _stack.pop();
    _stack.push(links * rechts);
}

void EvaluateVisitor::VisitAdd(Add *term){
    if(_state != 3)
        return;
    int rechts = _stack.top();
    _stack.pop();
    int links = _stack.top();
    _stack.pop();
    _stack.push(links + rechts);
}

void EvaluateVisitor::VisitVariable(Variable *term){
    if(_state != 2)
        return;
    _stack.push(term->GetZahl());
}

void EvaluateVisitor::VisitConst(Const *term){
    if(_state != 2)
        return;
    _stack.push(term->GetConst());
}

void EvaluateVisitor::VisitAssign(Assign *term){
    if(_state != 3)
        return;
    term->GetLinks()->SetZahl(GetResult());
    _stack.pop();
    _stack.pop();
}

void EvaluateVisitor::VisitLess(Less *term){
    if(_state != 3)
        return;
    int rechts = _stack.top();
    _stack.pop();
    int links = _stack.top();
    _stack.pop();

    _stack.push(links < rechts);
}

void EvaluateVisitor::VisitIf(If *term){
    if(_state != 2)
        return;
    bool links = _stack.top();
    _stack.pop();
    _executeRight = links;
}

Iterator * EvaluateVisitor::CreateIterator() {
    return new PostorderIterator(this);
}
