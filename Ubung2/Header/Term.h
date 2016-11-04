#ifndef TERM_H
#define TERM_H

#include <iostream>
#include <string>

using namespace std;

class Term{
    public:
      Term *GetTerm(){return this;};
      virtual string GetValue() = 0;
      virtual Term *GetLinks(){return NULL;};
      virtual Term *GetRechts(){return NULL;};
      virtual int Calculate(int links, int rechts) = 0;
};

#endif