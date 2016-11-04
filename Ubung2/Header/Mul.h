#include "Operation.h"

class Mul : public Operation{
    public:
      Mul(Term* links, Term*rechts);
      string GetValue();
      int Calculate(int links, int rechts);

    private:
};