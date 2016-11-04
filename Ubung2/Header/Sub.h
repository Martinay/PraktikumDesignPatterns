#include "Operation.h"

class Sub : public Operation{
    public:
      Sub(Term* links, Term*rechts);
      string GetValue();

    private:
};