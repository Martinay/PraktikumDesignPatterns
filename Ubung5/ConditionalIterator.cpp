#include "Header/ConditionalIterator.h"

ConditionalIterator::ConditionalIterator(Visitor* visitor)
: Iterator(visitor){

}

void ConditionalIterator::Traverse(Term* term)
{
    Term *tmp;
    if(tmp = term->GetLinks())
    {
        Traverse(tmp);
        _visitor->SetState(1);
        term->Accept(_visitor);
    }
    
    _visitor->SetState(2);
    term->Accept(_visitor);

    if((tmp = term->GetRechts()) && _visitor->GetExecuteRight())
    {
        Traverse(tmp);
        _visitor->SetState(3);
        term->Accept(_visitor);
    }

    // Term *tmp;
    // PostorderIterator* postIterator = new PostorderIterator(_visitor);
    // if (tmp = term->GetBedingung())
    // {

    //     _visitor->SetState(1);
    //     term->Accept(_visitor);

    //     _visitor->SetState(2);        
    //     postIterator->Traverse(tmp);
    //     term->Accept(_visitor);
    //     bool bedingung = _visitor->GetResult();


    //     if(tmp = term->GetTerm() && bedingung)
    //     {
    //         postIterator->Traverse(tmp);
    //         _visitor->SetState(3);
    //         term->Accept(_visitor);
    //     }
    // }
    // else
    // {
    //     postIterator->Traverse(tmp);
    // }
    
}