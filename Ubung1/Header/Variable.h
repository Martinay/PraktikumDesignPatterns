#ifndef VARIABLE_H
#define VARIABLE_H

#include "Term.h"

class Variable : public Term
{
    public:
      Variable(string variable);
      void Print();

    private:
      string _variable;
};

#endif