#include "Header/Iterator.h"

Iterator::Iterator(Visitor* visitor)
: _visitor(visitor){

}

void Iterator::Traverse(Term* term)
{
    Term *tmp;
    if(tmp = term->GetLinks())
    {
        _visitor->SetState(1);
        term->Accept(_visitor);
        Traverse(tmp);
    }
    
    _visitor->SetState(2);
    term->Accept(_visitor);

    if(tmp = term->GetRechts())
    {
        Traverse(tmp);
        _visitor->SetState(3);
        term->Accept(_visitor);
    }
}