#include "unary.h"
#include <string>
using namespace std;

Unary::Unary(Expression *p, string op) : p{p}, op{op} {}

string Unary::prettyprint() const {
       if (op == "NEG") 
          return "-" + p->prettyprint();
       else if (op == "ABS")
          return "|" + p->prettyprint() + "|";
}

int Unary::evaluate() const {
       if (op == "NEG") {
            return -1 * p->evaluate();
       } else if (op == "ABS") {
            if (p->evaluate() >= 0)
                return p->evaluate();
            else
                return -1 * p->evaluate();
        }
}

Unary::~Unary() { delete p; }
