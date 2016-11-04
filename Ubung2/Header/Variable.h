#ifndef VARIABLE_H
#define VARIABLE_H

#include "Term.h"

class Variable : public Term
{
    public:
      Variable(string variable, int zahl);
      string GetValue();

    private:
      string _variable;
      int _zahl;
};

#endif