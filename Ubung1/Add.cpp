#include "Header/Add.h"

Add::Add(Term* links, Term* rechts)
:_links(links), _rechts(rechts)
{
}

void Add::Print()
{
    cout << "(";
    _links->Print();
    cout << "+";
    _rechts->Print();
    cout << ")";
}