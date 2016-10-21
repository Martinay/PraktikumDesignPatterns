#include "Term.h"

class Sub : public Term{
    public:
      Sub(Term* links, Term*rechts);
      void Print();
      int Calc();
    private:
      Term *_links;
      Term *_rechts;
};