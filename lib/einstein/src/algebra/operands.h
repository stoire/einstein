#ifndef OPERANDS_H
#define OPERANDS_H

#include "Arduino.h"

struct DivisionOperands{
  uint64_t dividend;
  uint64_t divisor;
};

struct DivisionResult{
  uint64_t quocient;
  uint64_t remainder;
};

struct Time{
  uint64_t h;
  uint64_t min;
  uint64_t s;
  uint64_t ms;
};

#endif