#ifndef _INTEGER_H_
#define _INTEGER_H_
#include <string>
#include "expression.h"

class Integer : public Expression {
   std::string num;
  public:
   explicit Integer(std::string num);
   std::string prettyprint() const override;
   int evaluate() const override;
};

#endif
