#include "Header/ConcreteTermBuilder.h"

void ConcreteTermBuilder::AddLinkLeft(Term* node, Term* left){
    node->SetLinks(left);
}
void ConcreteTermBuilder::AddLinkRight(Term* node, Term* right){
    node->SetRechts(right);
}