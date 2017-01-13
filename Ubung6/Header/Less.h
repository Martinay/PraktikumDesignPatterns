#ifndef LESS_H
#define LESS_H

#include "Operation.h"

class Less : public Operation{
    public:
      Less(Term* links, Term*rechts);  
      void Accept(Visitor* visitor);

    private:
};

#endif