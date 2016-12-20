#ifndef _BINARY_H_
#define _BINARY_H_
#include <string>
#include "expression.h"

class Binary : public Expression {
   Expression *lhs;
   Expression *rhs;
   std::string op;
  public:
   Binary(Expression *lhs, Expression *rhs, std::string op);
   std::string prettyprint() const override;
   int evaluate() const override;
   ~Binary();
};

#endif
