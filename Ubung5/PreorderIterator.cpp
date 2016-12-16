#include "Header/PreorderIterator.h"

PreorderIterator::PreorderIterator(Visitor* visitor)
: Iterator(visitor){

}

void PreorderIterator::Traverse(Term* term)
{
    _visitor->SetState(2);
    term->Accept(_visitor);
    
    Term *tmp;
    if(tmp = term->GetLinks())
    {
        Traverse(tmp);
    }
    

    if(tmp = term->GetRechts())
    {
        Traverse(tmp);
    }    
}