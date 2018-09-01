#include "helpers/str_modifiers.h"
#include "algebra/operations.h"
#include "fundamental.h"
#include "const.h"

DivisionResult ms2s(uint64_t ms){
    return divide(DivisionOperands{ms, MS_TO_S});
}

DivisionResult s2min(uint64_t s){
    return divide(DivisionOperands{s, S_TO_MIN});
}

DivisionResult min2h(uint64_t min){
    return divide(DivisionOperands{min, MIN_TO_H});
}

Time ms2time(uint64_t ms){
/*
 * Converte tempo em [ms] para data
 * Entrada:
 *  [int]: tempo em [ms]
 * Saida:
 *  [String]: "h:min:s:ms"
 */

    // TODO: Utilzar módulo de tempo para verificar horário absoluto 
    DivisionResult division_result = ms2s(ms);
    ms = division_result.remainder;
    
    division_result = s2min(division_result.quocient);
    uint64_t s = division_result.remainder;

    division_result = min2h(division_result.quocient);
    uint64_t min = division_result.remainder;

    uint64_t h = division_result.quocient;

    return Time{h, min, s, ms};
}

String stringify_time(Time t) {
/*
 * Convert time obj to String
 * Entrada:
 *  [Time]: Time structure
 * Saida:
 *  [String]: "h:min:s:ms"
 */

    return lzeros(t.h, NUM_PLACES_H) + ":" + 
           lzeros(t.min, NUM_PLACES_MIN) + ":" + 
           lzeros(t.s, NUM_PLACES_S) + ":" + 
           lzeros(t.ms, NUM_PLACES_MS);
}