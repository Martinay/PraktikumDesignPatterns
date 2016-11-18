#ifndef ITERATOR_H
#define ITERATOR_H

#include "Term.h"
#include "Visitor.h"

using namespace std;

class Iterator 
{
    public:
      Iterator(Visitor* visitor);
      void Traverse(Term *term);

    private:
      Visitor *_visitor;
};

#endif