#include "Header/Sub.h"

Sub::Sub(Term* links, Term* rechts)
:Operation(links, rechts)
{
}

void Sub::Accept(Visitor* visitor)
{
    visitor->VisitSub(this);
}