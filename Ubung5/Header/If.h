#ifndef IF_H
#define IF_H

#include "Term.h"

class If : public Term{
    public:
      If(Term *bedingung, Term *term);
      ~If();
      Term *GetBedingung();
      Term *GetTerm();   
      void Accept(Visitor* visitor);

    private:
      Term *_bedingung;
      Term *_term;
};

#endif