#ifndef POSTORDERITERATOR_H
#define POSTORDERITERATOR_H

#include "Iterator.h"

using namespace std;

class PostorderIterator : public Iterator
{
    public:
      PostorderIterator(Visitor* visitor);
      void Traverse(Term *term);
      
};

#endif