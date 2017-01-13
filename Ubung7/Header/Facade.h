#ifndef FACADE_H
#define FACADE_H

#include "ConcreteTermBuilder.h"
#include "TermDirector.h"
#include "InorderIterator.h"
#include "NormalPrintVisitor.h"
#include "EvaluateVisitor.h"

class Facade
{
    public:
      void New();
      void Interpret();
      void Print();      
    private:
      Term *_term;
};

#endif