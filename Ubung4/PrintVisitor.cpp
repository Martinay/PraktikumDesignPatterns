#include "Header/PrintVisitor.h"
#include "Header/Variable.h"

PrintVisitor::PrintVisitor()
:Visitor(){}

void PrintVisitor::VisitSub(Sub *term){
    switch(_state){
        case 1:
            cout << "(";
            break;
        case 2:
            cout << "-";
            break;
        case 3:
            cout << ")";
            break;
    }
}

void PrintVisitor::VisitMul(Mul *term){
     switch(_state){
        case 1:
            cout << "(";
            break;
        case 2:
            cout << "*";
            break;
        case 3:
            cout << ")";
            break;
    }
}

void PrintVisitor::VisitAdd(Add *term){
     switch(_state){
        case 1:
            cout << "(";
            break;
        case 2:
            cout << "+";
            break;
        case 3:
            cout << ")";
            break;
    }
}

void PrintVisitor::VisitVariable(Variable *term){
    cout << term->GetVariable();
}