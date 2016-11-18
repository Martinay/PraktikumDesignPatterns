#ifndef VISITOR_H
#define VISITOR_H

#include <iostream>
#include <string>
class Sub;
class Add;
class Mul;
class Variable;

using namespace std;

class Visitor{
    public:
      virtual void VisitSub(Sub *term) = 0;
      virtual void VisitMul(Mul *term) = 0;
      virtual void VisitAdd(Add *term) = 0;
      virtual void VisitVariable(Variable *term) = 0;

};

#endif