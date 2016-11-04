#include "Operation.h"

class Sub : public Operation{
    public:
      Sub(Term* links, Term*rechts);
      string GetValue();
      int Calculate(int links, int rechts);

    private:
};