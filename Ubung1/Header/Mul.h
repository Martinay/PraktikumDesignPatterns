#include "Term.h"

class Mul : public Term{
    public:
      Mul(Term* links, Term*rechts);
      void Print();
    private:
      Term *_links;
      Term *_rechts;
};