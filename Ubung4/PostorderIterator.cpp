#include "Header/PostorderIterator.h"

PostorderIterator::PostorderIterator(Visitor* visitor)
: Iterator(visitor){

}

void PostorderIterator::Traverse(Term* term)
{
    Term *tmp;
    if(tmp = term->GetLinks())
    {
        Traverse(tmp);
    }
    

    if(tmp = term->GetRechts())
    {
        Traverse(tmp);
    }
    
    term->Accept(_visitor);
}