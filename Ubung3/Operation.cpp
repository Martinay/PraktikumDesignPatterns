#include "Header/Operation.h"

Operation::Operation(Term* links, Term* rechts)
: _links(links), _rechts(rechts)
{};

Term* Operation::GetLinks()
{
    return _links;
}

Term* Operation::GetRechts()
{
    return _rechts;
}