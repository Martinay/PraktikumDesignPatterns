#ifndef TERMITERATOR_H
#define TERMITERATOR_H

#include "Term.h"
#include "Operation.h"
#include <stack>
using namespace std;

class TermIterator 
{
    public:
      virtual int Traverse(Term *term) = 0;

    private:
};

#endif