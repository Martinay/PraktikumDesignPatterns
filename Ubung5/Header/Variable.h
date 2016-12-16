#ifndef VARIABLE_H
#define VARIABLE_H

#include "Term.h"

class Variable : public Term
{
    public:
      Variable(string variable, int zahl);  
      void Accept(Visitor* visitor);
      string GetVariable(){return _variable;}
      int GetZahl(){return _zahl;}

    private:
      string _variable;
      int _zahl;
};

#endif