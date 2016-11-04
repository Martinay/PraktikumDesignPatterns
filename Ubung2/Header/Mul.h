#include "Operation.h"

class Mul : public Operation{
    public:
      Mul(Term* links, Term*rechts);
      string GetValue();

    private:
};