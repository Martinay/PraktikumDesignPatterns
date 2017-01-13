#include <iostream>
#include <cstdio>
#include "Header/ConcreteTermBuilder.h"
#include "Header/TermDirector.h"
#include "Header/InorderIterator.h"
#include "Header/NormalPrintVisitor.h"
#include "Header/EvaluateVisitor.h"

using namespace std;

int main()
{
    ConcreteTermBuilder* builder = new ConcreteTermBuilder();
    TermDirector *director = new TermDirector(builder);
    director->Create();
    Term *term = director->GetTerm();

    Visitor *normalPrintVisitor = new NormalPrintVisitor();
    Iterator * normalIterator = normalPrintVisitor->CreateIterator();
    cout << endl << "IN:   ";
    normalIterator->Traverse(term);

    EvaluateVisitor *evaluateVisitor = new EvaluateVisitor();
    Iterator * evaluateIterator = evaluateVisitor->CreateIterator();
    evaluateIterator->Traverse(term);
    cout << endl << "Lösung: " << evaluateVisitor->GetResult();

    getchar();
}