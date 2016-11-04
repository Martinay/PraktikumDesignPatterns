#include "Header/PrintIterator.h"

int PrintIterator::Traverse(Term* term)
{
    Term *tmp;
    if(tmp = term->GetLinks())
    {
            cout << "(";            
            Traverse(tmp);
    }

    cout << term->GetValue();

    if(tmp = term->GetRechts())
    {
        Traverse(tmp);
        cout << ")";
    }
    return 0;
}
