#ifndef Operation_H
#define Operation_H

#include "Term.h"

class Operation : public Term{
    public:
      Operation(Term *links, Term *rechts);
      ~Operation();
      Term *GetLinks();
      Term *GetRechts();
      void SetLinks(Term* term);
      void SetRechts(Term* term);   

    private:
      Term *_links;
      Term *_rechts;
};

#endif