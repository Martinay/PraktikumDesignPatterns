#include "Header/If.h"

If::If(Term* bedingung, Term* term)
: _bedingung(bedingung), _term(term)
{};

If::~If(){
    delete _bedingung;
    delete _term;
}

Term* If::GetBedingung()
{
    return _bedingung;
}

Term* If::GetTerm()
{
    return _term;
}

void If::Accept(Visitor* visitor)
{
    visitor->VisitIf(this);
}