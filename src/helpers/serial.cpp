#include "serial.h"

String n_chars(char character, int repetitions){
/*  Provides 'n' chars required
 *  Entrada:
 *      [char]: character repeated
 *      [int]: number of repetitions 
 * 
 *  Saida:
 *      [String]: string with repeated pattern
 */

    String repeated("");
    for(int i = 0; i < repetitions; i++) {
        repeated += character;
    }
    return repeated;
}