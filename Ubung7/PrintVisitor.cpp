#include "Header/PrintVisitor.h"
#include "Header/Variable.h"
#include "Header/Const.h"

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

void PrintVisitor::VisitConst(Const *term){
    cout << term->GetConst();
}

void PrintVisitor::VisitAssign(Assign *term){
    switch(_state){
        case 1:
            break;
        case 2:
            cout << "=";
            break;
        case 3:
            break;
    }
}

void PrintVisitor::VisitLess(Less *term){
    switch(_state){
        case 1:
            cout << "(";
            break;
        case 2:
            cout << "<";
            break;
        case 3:
            cout << ")";
            break;
    }
}

void PrintVisitor::VisitIf(If *term){
    switch(_state){
        case 1:
            cout << "If ";
            break;
        case 2:
            cout << " ";
            break;
        case 3:
            cout << " ";
            break;
    }
}