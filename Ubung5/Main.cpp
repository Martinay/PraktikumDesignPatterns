#include <iostream>
#include <cstdio>
#include "Header/Add.h"
#include "Header/Sub.h"
#include "Header/Mul.h"
#include "Header/InorderIterator.h"
#include "Header/PostorderIterator.h"
#include "Header/Variable.h"
#include "Header/NormalPrintVisitor.h"
#include "Header/EvaluateVisitor.h"
#include "Header/Const.h"
#include "Header/Less.h"
#include "Header/If.h"
#include "Header/Assign.h"

using namespace std;

int main()
{
    Variable * a = new Variable("a", 1);
    Variable * b = new Variable("b", 2);
    Variable * c = new Variable("c", 3);
    Variable * d = new Variable("d", 4);
    Variable * x = new Variable("x", 6);

    Term *termCalc = new Add(
        new Mul(
            new Add(a, b),
            new Sub(a, c)
        ),
        new Sub(
            new Mul(b, d),
            a
        )
    );

    Term *assign = new Assign(x, termCalc);
    Term *term = new If(
        new Less(x, new Const(0)),
        assign);
    
    Visitor* normalPrintVisitor = new NormalPrintVisitor();
    Iterator * normalIterator = normalPrintVisitor->CreateIterator();
    cout << endl << "IN:   ";
    normalIterator->Traverse(term);

    EvaluateVisitor *evaluateVisitor = new EvaluateVisitor();
    Iterator * evaluateIterator = evaluateVisitor->CreateIterator();
    evaluateIterator->Traverse(term);
    cout << endl << "Lösung: " << x->GetZahl();

    getchar();
}