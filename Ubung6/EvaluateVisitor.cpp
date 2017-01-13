#include "Header/EvaluateVisitor.h"
#include "Header/Variable.h"
#include "Header/Assign.h"
#include "Header/Const.h"
#include "Header/PostorderIterator.h"


EvaluateVisitor::EvaluateVisitor(){
    _executeRight = true;
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

    int rechts = _stack.top();
    _stack.pop();
    int links = _stack.top();
    _stack.pop();
    _stack.push(links - rechts);
}

void EvaluateVisitor::VisitMul(Mul *term){

    int rechts = _stack.top();
    _stack.pop();
    int links = _stack.top();
    _stack.pop();
    _stack.push(links * rechts);
}

void EvaluateVisitor::VisitAdd(Add *term){

    int rechts = _stack.top();
    _stack.pop();
    int links = _stack.top();
    _stack.pop();
    _stack.push(links + rechts);
}

void EvaluateVisitor::VisitVariable(Variable *term){

    _stack.push(term->GetZahl());
}

void EvaluateVisitor::VisitConst(Const *term){

    _stack.push(term->GetConst());
}

void EvaluateVisitor::VisitAssign(Assign *term){

    term->GetLinks()->SetZahl(GetResult());
    _stack.pop();
    _stack.pop();
}

void EvaluateVisitor::VisitLess(Less *term){

    int rechts = _stack.top();
    _stack.pop();
    int links = _stack.top();
    _stack.pop();

    _stack.push(links < rechts);
}

void EvaluateVisitor::VisitIf(If *term){

    bool links = _stack.top();
    _stack.pop();
    _executeRight = links;
}

Iterator * EvaluateVisitor::CreateIterator() {
    return new PostorderIterator(this);
}
