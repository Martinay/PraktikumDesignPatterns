#include "Header/Variable.h"

Variable::Variable(string variable)
: _variable(variable)
{}

void Variable::Print()
{
    cout << _variable;
}