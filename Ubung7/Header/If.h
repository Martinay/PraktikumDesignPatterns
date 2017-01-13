#ifndef IF_H
#define IF_H

#include "Operation.h"

class If : public Operation {
    public:
      If(Term *links, Term *rechts);
      void Accept(Visitor* visitor);
    private:
};

#endif