#include <vector>
#include <string>
#include <iostream>
#include "expression.h"
#include "integer.h"
#include "unary.h"
#include "binary.h"
using namespace std;

int main () {

cin.exceptions(ios::failbit);

vector <Expression*> exp;
Expression *lhs;
Expression *rhs;
Expression *op;
string x;
int answer;

while (1) {

   try {
      cin >> x;
      if (x == "+" || x == "-" || x == "*" || x == "/") {
          rhs = exp.back();
           exp.pop_back();
           lhs = exp.back();
           exp.pop_back();
          op = new Binary{lhs, rhs , x};
          exp.push_back(op);

      } else if (x == "NEG" || x == "ABS") {
           rhs = exp.back();
           exp.pop_back();
           op = new Unary{rhs, x};
           exp.emplace_back(op);

       } else {
           op = new Integer{x};
           exp.emplace_back(op);

       }
   } catch (ios::failure &) {
        if (cin.eof()) break;
         cin.clear();
         cin.ignore();
   }
}

op = exp.back();
x = op->prettyprint();
cout << x << endl;
answer = op->evaluate();
cout << "= " << answer << endl;
delete op;

}
