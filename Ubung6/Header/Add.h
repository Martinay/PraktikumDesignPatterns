#ifndef ADD_H
#define ADD_H

#include "Operation.h"

class Add : public Operation{
    public:
      Add(Term* links, Term* rechts);      
      void Accept(Visitor* visitor);

    private:
};

#endif