#include "Header/Iterator.h"

Iterator::Iterator(Visitor* visitor)
: _visitor(visitor){

}

void Iterator::Traverse(Term* term)
{
    Term *tmp;
    if (tmp = term->GetLinks())
    {          
        Traverse(tmp);
    }

    if(tmp = term->GetRechts())
    {
         Traverse(tmp);
    }

    //term->accept(_visitor);
}