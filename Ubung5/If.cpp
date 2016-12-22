#include "Header/If.h"

If::If(Term* links, Term* rechts)
: Operation(links, rechts)
{};

void If::Accept(Visitor* visitor)
{
    visitor->VisitIf(this);
}