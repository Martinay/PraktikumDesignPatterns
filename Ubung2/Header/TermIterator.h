#ifndef TERMITERATOR_H
#define TERMITERATOR_H

#include "Term.h"
#include "Operation.h"
#include <stack>
using namespace std;

class TermIterator
{
    public:
      TermIterator(Term *term);
      void First();
      void Next();
      bool IsDone();
      Term *CurrentItem();

    private:
      Term *_first;
      Term *_current;
      Term *_currentReturnValue;
      stack<Term *> *_stack;
};

#endif