#ifndef TERM_H
#define TERM_H

#include <iostream>

using namespace std;

class Term{
    public:
      virtual void Print() = 0;
      virtual int Calc() = 0;
};

#endif