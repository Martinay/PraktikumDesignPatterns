#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include <iostream>
#include <string>
#include "Visitor.h"


using namespace std;

class PrintVisitor : public Visitor {
    public:
      PrintVisitor();
      void VisitSub(Sub *term);
      void VisitMul(Mul *term);
      void VisitAdd(Add *term);
      void VisitVariable(Variable *term);
      virtual void VisitIf(If *term);
      virtual void VisitConst(Const *term);
      virtual void VisitAssign(Assign *term);
      virtual void VisitLess(Less *term);
      virtual Iterator* CreateIterator() = 0;
};

#endif
