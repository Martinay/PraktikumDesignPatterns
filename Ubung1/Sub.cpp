#include "Header/Sub.h"

Sub::Sub(Term* links, Term* rechts)
:_links(links), _rechts(rechts)
{
}

void Sub::Print()
{
    cout << "(";
    _links->Print();
    cout << "-";
    _rechts->Print();
    cout << ")";
}

int Sub::Calc()
{
    return _links->Calc() - _rechts->Calc();
}