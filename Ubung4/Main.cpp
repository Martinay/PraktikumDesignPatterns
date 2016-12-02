#include <iostream>
#include "Header/Add.h"
#include "Header/Sub.h"
#include "Header/Mul.h"
#include "Header/InorderIterator.h"
#include "Header/PostorderIterator.h"
#include "Header/Variable.h"
#include "Header/PrintVisitor.h"
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

    PrintVisitor* printVisitor = new PrintVisitor();

    cout << "PRE:   ";
    Iterator *polinischIterator = printVisitor->CreateIterator("polishPrint");
    polinischIterator->Traverse(term);

    cout << endl << "IN:   ";
    Iterator *normalIterator = printVisitor->CreateIterator("normalPrint");
    normalIterator->Traverse(term);

    EvaluateVisitor *evaluateVisitor = new EvaluateVisitor();
    Iterator* evaluateIterator = evaluateVisitor->CreateIterator("evaluate");
    evaluateIterator->Traverse(term);

    cout << endl << "Lösung: " << evaluateVisitor->GetResult();

    int ab;
    cin >> ab;
    return 0;
}