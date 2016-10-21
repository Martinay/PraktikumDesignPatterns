#include "Term.h"

class Mul : public Term{
    public:
      Mul(Term* links, Term*rechts);
      void Print();
      int Calc();

    private:
      Term *_links;
      Term *_rechts;
};