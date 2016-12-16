#ifndef ITERATOR_H
#define ITERATOR_H

#include "Term.h"
#include "Visitor.h"

using namespace std;

class Iterator 
{
    public:
      Iterator(Visitor* visitor);
      ~Iterator();
      virtual void Traverse(Term *term) = 0;

    protected:
      Visitor *_visitor;
};

#endif