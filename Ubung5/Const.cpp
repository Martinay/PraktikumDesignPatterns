#include "Header/Const.h"

Const::Const(int zahl)
: _zahl(zahl)
{}

void Const::Accept(Visitor* visitor)
{
    visitor->VisitConst(this);
}