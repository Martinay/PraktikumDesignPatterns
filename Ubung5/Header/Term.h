#ifndef TERM_H
#define TERM_H

#include <iostream>
#include <string>
#include "Visitor.h"

using namespace std;

class Term{
    public:
      Term *GetTerm() {return this;}
      virtual Term *GetLinks() {return NULL;}
      virtual Term *GetRechts() {return NULL;}
      virtual void SetZahl(int zahl) {return;}
      virtual void Accept(Visitor* visitor) = 0;
};

#endif