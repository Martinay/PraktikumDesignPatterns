#include "Header/Variable.h"

Variable::Variable(string variable, int zahl)
: _variable(variable), _zahl(zahl)
{}

void Variable::Print()
{
    cout << _variable;
}

int Variable::Calc()
{
    return _zahl;
}