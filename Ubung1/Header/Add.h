#ifndef ADD_H
#define ADD_H

#include "Term.h"

class Add : public Term{
    public:
      Add(Term* links, Term*rechts);
      void Print();
    private:
      Term *_links;
      Term *_rechts;
};

#endif