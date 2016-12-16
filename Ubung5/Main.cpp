#include <iostream>
#include <cstdio>
#include "Header/Add.h"
#include "Header/Sub.h"
#include "Header/Mul.h"
#include "Header/InorderIterator.h"
#include "Header/PostorderIterator.h"
#include "Header/Variable.h"
#include "Header/NormalPrintVisitor.h"
#include "Header/PolishPrintVisitor.h"
#include "Header/EvaluateVisitor.h"

using namespace std;

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;

    Term *term = new Add(
        new Mul(
            new Add(
                new Variable("a",a),
                new Variable("b",b)),
            new Sub(
                new Variable("a",a),
                new Variable("c",c))),
        new Sub(
            new Mul(
                new Variable("b",b),
                new Variable("d",d)),
            new Variable("a",a)));

    Visitor* polishPrintVisitor = new PolishPrintVisitor();
    Iterator * polinischIterator = polishPrintVisitor->CreateIterator();
    cout << "PRE:   ";
    polinischIterator->Traverse(term);

    Visitor* normalPrintVisitor = new NormalPrintVisitor();
    Iterator * normalIterator = normalPrintVisitor->CreateIterator();
    cout << endl << "IN:   ";
    normalIterator->Traverse(term);

    EvaluateVisitor *evaluateVisitor = new EvaluateVisitor();
    Iterator * evaluateIterator = evaluateVisitor->CreateIterator();
    evaluateIterator->Traverse(term);
    cout << endl << "Lösung: " << evaluateVisitor->GetResult();

    getchar();
}