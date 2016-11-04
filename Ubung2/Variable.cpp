#include "Header/Variable.h"

Variable::Variable(string variable, int zahl)
: _variable(variable), _zahl(zahl)
{}

string Variable::GetValue()
{
    return _variable;
}