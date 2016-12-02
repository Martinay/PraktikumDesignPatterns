#include "Header/Visitor.h"
#include "Header/PostorderIterator.h"
#include "Header/PreorderIterator.h"
#include "Header/InorderIterator.h"

Visitor::Visitor(){}

void Visitor::SetState(int state){
    _state = state;
}

Iterator* Visitor::CreateIterator(string option){
    if(option == "post")
        return new PostorderIterator(this);
    if(option == "pre")
        return new PreorderIterator(this);
    if(option == "in")
        return new InorderIterator(this);
    return NULL;
}