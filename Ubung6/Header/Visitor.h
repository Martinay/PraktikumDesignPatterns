#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string>
class Iterator;
class Sub;
class Add;
class Mul;
class Variable;
class If;
class Const;
class Assign;
class Less;

using namespace std;

class Visitor {
    public:
      Visitor();
      void SetState(int state);
      virtual bool GetExecuteRight() { return true; }
      virtual Iterator* CreateIterator() = 0;
      virtual void VisitSub(Sub *term) = 0;
      virtual void VisitMul(Mul *term) = 0;
      virtual void VisitAdd(Add *term) = 0;
      virtual void VisitVariable(Variable *term) = 0;
      virtual void VisitIf(If *term) = 0;
      virtual void VisitConst(Const *term) = 0;
      virtual void VisitAssign(Assign *term) = 0;
      virtual void VisitLess(Less *term) = 0;

    protected:
      int _state;
};

#endif