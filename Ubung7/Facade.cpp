#include "Header/Facade.h"

void Facade::New(){
    ConcreteTermBuilder* builder = new ConcreteTermBuilder();
    TermDirector *director = new TermDirector(builder);
    director->CreateBottomUp();
    _term = director->GetTerm();
}

void Facade::Interpret(){
    EvaluateVisitor *evaluateVisitor = new EvaluateVisitor();
    Iterator * evaluateIterator = evaluateVisitor->CreateIterator();
    evaluateIterator->Traverse(_term);
    cout << endl << "Lösung: " << evaluateVisitor->GetResult();
}

void Facade::Print(){
    Visitor *normalPrintVisitor = new NormalPrintVisitor();
    Iterator * normalIterator = normalPrintVisitor->CreateIterator();
    cout << endl << "IN:   ";
    normalIterator->Traverse(_term);
} 