#ifndef TERMBUILDER_H
#define TERMBUILDER_H

#include <iostream>
#include "Term.h"

using namespace std;

class TermBuilder{
    public:
      virtual void AddLinkLeft(Term* node, Term* left) = 0;
      virtual void AddLinkRight(Term* node, Term* right) = 0;
};

#endif