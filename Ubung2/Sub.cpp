#include "Header/Sub.h"

Sub::Sub(Term* links, Term* rechts)
:Operation(links, rechts)
{
}

string Sub::GetValue()
{
    return "-";
}

int Sub::Calculate(int links, int rechts){
    return links - rechts;
}