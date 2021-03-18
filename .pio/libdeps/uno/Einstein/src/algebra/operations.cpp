#include "operations.h"

DivisionResult divide(DivisionOperands p){
  DivisionResult r;
  r.remainder = p.dividend % p.divisor;
  r.quocient = (p.dividend - r.remainder)/p.divisor;
  return r;
}