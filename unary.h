#ifndef _UNARY_H_
#define _UNARY_H_
#include <string>
#include "expression.h"

class Unary : public Expression {
   Expression *p;
   std::string op;
  public:
   Unary(Expression *p, std::string op);
   std::string prettyprint() const override;
   int evaluate() const override;
   ~Unary();
};

#endif
