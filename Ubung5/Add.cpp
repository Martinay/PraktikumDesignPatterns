#include "Header/Add.h"

Add::Add(Term* links, Term* rechts)
:Operation(links, rechts)
{
}

void Add::Accept(Visitor* visitor)
{
    visitor->VisitAdd(this);
}