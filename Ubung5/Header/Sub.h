#ifndef SUB_H
#define SUB_H
#include "Operation.h"

class Sub : public Operation{
    public:
      Sub(Term* links, Term* rechts);  
      void Accept(Visitor* visitor);

    private:
};
#endif