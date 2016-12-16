#include "Header/EvaluateVisitor.h"
#include "Header/PostorderIterator.h"
#include "Header/Variable.h"


EvaluateVisitor::EvaluateVisitor(){

}

int EvaluateVisitor::GetResult(){
    return _stack.top();
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
    // _stack.push(term->GetConst());
}

void EvaluateVisitor::VisitAssign(Assign *term){
    // int rechts = _stack.top();
    // _stack.pop();
    // int links = _stack.top();
    // _stack.pop();
    // _stack.push(links + rechts);
}

void EvaluateVisitor::VisitLess(Less *term){
    // int rechts = _stack.top();
    // _stack.pop();
    // int links = _stack.top();
    // _stack.pop();
    // _stack.push(links + rechts);
}

void EvaluateVisitor::VisitIf(If *term){
    // int rechts = _stack.top();
    // _stack.pop();
    // int links = _stack.top();
    // _stack.pop();
    // _stack.push(links + rechts);
}

Iterator * EvaluateVisitor::CreateIterator() {
    return new PostorderIterator(this);
}
