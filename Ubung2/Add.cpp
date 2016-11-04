#include "Header/Add.h"

Add::Add(Term* links, Term* rechts)
:Operation(links, rechts)
{
}

string Add::GetValue()
{
    return "+";
}