#ifndef CONST_H
#define CONST_H

#include "Term.h"

class Const : public Term
{
    public:
      Const(int zahl);  
      void Accept(Visitor* visitor);
      int GetConst(){return _zahl;}

    private:
      int _zahl;
};

#endif