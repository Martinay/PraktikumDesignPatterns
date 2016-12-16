#include <iostream>
#include <string>
#include <stack>
#include "Visitor.h"
//class PostorderIterator;

using namespace std;

class EvaluateVisitor : public Visitor{
    public:
      EvaluateVisitor();
      void VisitSub(Sub *term);
      void VisitMul(Mul *term);
      void VisitAdd(Add *term);
      void VisitVariable(Variable *term);
      virtual void VisitIf(If *term);
      virtual void VisitConst(Const *term);
      virtual void VisitAssign(Assign *term);
      virtual void VisitLess(Less *term);
      int GetResult();
      Iterator * CreateIterator();
    private:
      stack<int> _stack;
};