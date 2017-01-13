#include "Header/Less.h"

Less::Less(Term* links, Term* rechts)
:Operation(links, rechts)
{
}

void Less::Accept(Visitor* visitor)
{
    visitor->VisitLess(this);
}