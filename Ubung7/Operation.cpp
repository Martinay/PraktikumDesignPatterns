#include "Header/Operation.h"

Operation::Operation(Term* links, Term* rechts)
: _links(links), _rechts(rechts)
{};

Operation::~Operation(){
    delete _links;
    delete _rechts;
}

Term* Operation::GetLinks()
{
    return _links;
}

Term* Operation::GetRechts()
{
    return _rechts;
}

void Operation::SetLinks(Term* term){
    _links = term;
}

void Operation::SetRechts(Term* term){
    _rechts = term;
}   