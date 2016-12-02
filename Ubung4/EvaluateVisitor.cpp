#include "Header/EvaluateVisitor.h"
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