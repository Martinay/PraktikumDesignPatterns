#ifndef MUL_H
#define MUL_H

#include "Operation.h"

class Mul : public Operation{
    public:
      Mul(Term* links, Term*rechts);  
      void Accept(Visitor* visitor);

    private:
};

#endif