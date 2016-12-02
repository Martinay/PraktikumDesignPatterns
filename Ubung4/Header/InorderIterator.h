#ifndef INORDERITERATOR_H
#define INORDERITERATOR_H

#include "Iterator.h"

using namespace std;

class InorderIterator : public Iterator
{
    public:
      InorderIterator(Visitor* visitor);
      void Traverse(Term *term);
      
};

#endif