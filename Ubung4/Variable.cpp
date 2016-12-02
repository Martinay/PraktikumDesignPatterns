#include "Header/Variable.h"

Variable::Variable(string variable, int zahl)
: _variable(variable), _zahl(zahl)
{}

void Variable::Accept(Visitor* visitor)
{
    visitor->VisitVariable(this);
}