#ifndef CONDITIONALITERATOR_H
#define CONDITIONALITERATOR_H

#include "Iterator.h"

using namespace std;

class ConditionalIterator : public Iterator
{
    public:
      ConditionalIterator(Visitor* visitor);
      void Traverse(Term *term);
      
};

#endif