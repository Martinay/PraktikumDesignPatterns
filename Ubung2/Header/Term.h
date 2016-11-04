#ifndef TERM_H
#define TERM_H

#include <iostream>
#include <string>
//#include "TermIterator.h"

using namespace std;

class Term{
    public:
      Term *GetTerm(){return this;};
      virtual string GetValue() = 0;
      //TermIterator GetIterator(){return TermIterator(this);};
};

#endif