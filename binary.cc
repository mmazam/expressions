#include "binary.h"
#include <string>
using namespace std;

Binary::Binary(Expression *lhs, Expression *rhs, string op) : lhs{lhs}, rhs{rhs}, op{op} {}

string Binary::prettyprint() const {
       if (op == "+")
          return "(" + lhs->prettyprint() + " + " + rhs->prettyprint() + ")";
       else if (op == "-")
          return "(" + lhs->prettyprint() + " - " + rhs->prettyprint() + ")";
       else if (op == "*")
          return "(" + lhs->prettyprint() + " * " + rhs->prettyprint() + ")";
      else if (op == "/")
          return "(" + lhs->prettyprint() + " / " + rhs->prettyprint() + ")";
}

int Binary::evaluate() const {
         if (op == "+")
            return lhs->evaluate() + rhs->evaluate();
         else if (op == "-")
            return lhs->evaluate() - rhs->evaluate();
         else if (op == "*")
            return lhs->evaluate() * rhs->evaluate();
         else if (op == "/")
            return lhs->evaluate() / rhs->evaluate();
}

Binary::~Binary() {
   delete rhs;
   delete lhs;
}
