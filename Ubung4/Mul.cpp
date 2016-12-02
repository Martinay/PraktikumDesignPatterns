#include "Header/Mul.h"

Mul::Mul(Term* links, Term* rechts)
:Operation(links, rechts)
{
}

void Mul::Accept(Visitor* visitor)
{
    visitor->VisitMul(this);
}