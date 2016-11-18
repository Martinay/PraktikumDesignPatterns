#include "Header/PrintVisitor.h"
#include "Header/Variable.h"

void PrintVisitor::VisitSub(Sub *term){
    cout << "-";
}
void PrintVisitor::VisitMul(Mul *term){
    cout << "*";
}
void PrintVisitor::VisitAdd(Add *term){
    cout << "+";
}
void PrintVisitor::VisitVariable(Variable *term){
    cout << term->GetVariable();
}