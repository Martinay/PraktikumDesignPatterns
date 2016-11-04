#include "Header/Variable.h"

Variable::Variable(string variable, int zahl)
: _variable(variable), _zahl(zahl)
{}

string Variable::GetValue()
{
    return _variable;
}

int Variable::Calculate(int links, int rechts){
    return _zahl;
}