#ifndef PRINTITERATOR_H
#define PRINTITERATOR_H

#include "Term.h"
#include "TermIterator.h"

class PrintIterator : TermIterator
{
    public:
      int Traverse(Term *term);

    private:
};

#endif