#include "Header/Visitor.h"
#include "Header/PostorderIterator.h"
#include "Header/PreorderIterator.h"
#include "Header/InorderIterator.h"

Visitor::Visitor(){}

void Visitor::SetState(int state){
    _state = state;
}
