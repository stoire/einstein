#ifndef FUNDAMENTAL_H
#define FUNDAMENTAL_H

#include "Arduino.h"

#include "algebra/operands.h"

DivisionResult ms2s(uint64_t);
DivisionResult s2min(uint64_t); 
DivisionResult min2h(uint64_t);

Time ms2time(uint64_t);
String stringify_time(Time);

#endif