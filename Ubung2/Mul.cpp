#include "Header/Mul.h"

Mul::Mul(Term* links, Term* rechts)
:Operation(links, rechts)
{
}

string Mul::GetValue()
{
    return "*";
}

int Mul::Calculate(int links, int rechts){
    return links * rechts;
}