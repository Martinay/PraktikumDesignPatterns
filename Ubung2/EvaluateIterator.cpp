#include "Header/EvaluateIterator.h"

int EvaluateIterator::Traverse(Term* term)
{
    Term *tmp;
    int links = 0, rechts = 0;
    if (tmp = term->GetLinks())
    {          
        links = Traverse(tmp);
    }

    if(tmp = term->GetRechts())
    {
         rechts = Traverse(tmp);
    }

    return term->Calculate(links, rechts);
}