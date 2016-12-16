#ifndef ASSIGN_H
#define ASSIGN_H

#include "Operation.h"

class Assign : public Operation{
    public:
      Assign(Term* links, Term*rechts);  
      void Accept(Visitor* visitor);

    private:
};

#endif