#ifndef PREORDERITERATOR_H
#define PREORDERITERATOR_H

#include "Iterator.h"

using namespace std;

class PreorderIterator : public Iterator
{
    public:
      PreorderIterator(Visitor* visitor);
      void Traverse(Term *term);
      
};

#endif