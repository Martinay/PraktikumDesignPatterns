#ifndef TERMDIRECTOR_H
#define TERMDIRECTOR_H

#include <iostream>
#include <vector>
#include "Term.h"
#include "Add.h"
#include "Sub.h"
#include "Mul.h"
#include "Variable.h"
#include "TermBuilder.h"

using namespace std;

class TermDirector{
    public:
      TermDirector(TermBuilder* builder);
      void CreateTopDown();
      void CreateBottomUp();
      Term* GetTerm();
      private:
        TermBuilder* _builder;
        vector<Term*> _term;
        void CreateTermArray();
};

#endif