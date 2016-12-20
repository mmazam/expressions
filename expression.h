#ifndef _EXPRESSION_H_
#define _EXPRESSION_H_
#include <string>

class Expression {
  public:
    virtual std::string prettyprint() const = 0;
    virtual int evaluate() const = 0;
    virtual ~Expression();
};

#endif
