#ifndef CONCRETETERMBUILDER_H
#define CONCRETETERMBUILDER_H

#include <iostream>
#include "TermBuilder.h"

using namespace std;

class ConcreteTermBuilder : public TermBuilder{
    public:
      void AddLinkLeft(Term* node, Term* left);
      void AddLinkRight(Term* node, Term* right);
};

#endif