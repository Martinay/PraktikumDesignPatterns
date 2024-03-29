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
      int GetResult();
      Iterator * CreateIterator();
    private:
      stack<int> _stack;
};