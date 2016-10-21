#include "Header/Mul.h"

Mul::Mul(Term* links, Term* rechts)
:_links(links), _rechts(rechts)
{
}

void Mul::Print()
{
    cout << "(";
    _links->Print();
    cout << "*";
    _rechts->Print();
    cout << ")";
}

int Mul::Calc()
{
    return _links->Calc() * _rechts->Calc();
}