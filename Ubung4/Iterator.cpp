#include "Header/Iterator.h"

Iterator::Iterator(Visitor* visitor)
: _visitor(visitor)
{}

Iterator::~Iterator(){
    delete _visitor;
}