#include "Header/Assign.h"

Assign::Assign(Term* links, Term* rechts)
:Operation(links, rechts)
{
}

void Assign::Accept(Visitor* visitor)
{
    visitor->VisitAssign(this);
}