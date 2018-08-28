#include "math.h"

#include "str_modifiers.h"
#include "serial.h"

String lzeros(int number, int format_places){
/* Add zeros to int numbers according to number of places available
 * Caution: if no. of number places does not fit the formar places, it 
 * returns the stringified number instead
 *  Entrada:
 *    - [int]: number to add the zeros
 *    - [int]: number of place
 *  Saida:
 *    - [String]: number with zeros at left side or itself stringified
 */

    String formatted(number);
    int num_places = formatted.length();
    String zeros = n_chars('0', format_places - num_places);

    // TO FIX: More places than available, what should we do?
    return (num_places >= format_places) ? formatted : zeros + formatted;
}
