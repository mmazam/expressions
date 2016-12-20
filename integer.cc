#include "integer.h"
#include <string>
using namespace std;

Integer::Integer(string num) : num{num} {}

string Integer::prettyprint() const { return num; }

int Integer::evaluate() const { return stoi(num); }
