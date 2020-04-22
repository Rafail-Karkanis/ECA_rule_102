/*****************************************************************************
 * eca.h:                                                                    *
 *               Header file contains necessary include directives,          *
 *               define directives, function signatures                      *
 *               and their descriptions regarding the implementation         *
 *               of the Elementary Cellular Automaton.                       *
 *****************************************************************************/

#ifndef ECA
#define ECA

#include <stdio.h>
#include <stdlib.h>

#define ALIVE 1    /* default value for alive state */
#define DEAD 0     /* default value for dead state */

/*****************************************************************************
 * alloc_eca:    Allocates memory for the Elementary Cellular Automaton.     *
 *               Terminates program upon failed allocation                   *
 *****************************************************************************/
void alloc_eca(int ** eca, const int len);

/*****************************************************************************
 * init_eca:    Initializes the Elementary Cellular Automaton.               *
 *              If initial state is set by the user, calls function dec2ca   *
 *****************************************************************************/
void init_eca(int ** eca, const int len, int * usr_in);

/*****************************************************************************
 * dec2ca:    Converts a decimal number to binary and stores it              *
 *            to the Cellular Automaton.                                     *
 *                                                                           *
 *            Terminates program if the number is too big for storing        *
 *            to the given Automaton.                                        *
 *****************************************************************************/
void dec2eca(int ** eca, const int len, int * dec);

/*****************************************************************************
 * cur2prev:   Copies src (current state) Elemetary Cellular Automaton       *
 *             to dest (previous state) Elementary Cellular Automaton.       *
 *             Applies the periodic boundary condition to dest.              *
 *****************************************************************************/
void cur2prev(int ** dest, const int * src, const int len);

/*****************************************************************************
 * new_cell_state:    Assigns new value for the next state                   *
 *                    of the Elementary Cellular Automaton                   *
 *****************************************************************************/
void next_cell_state(int ** eca,  const int pos, const int val);

/*****************************************************************************
 * rule_102:    Calculates and returns the next cell state                   *
 *              by using the additive Elementary Cellular Automaton rule 102 *
 *****************************************************************************/
int rule_102(const int * prev, const int pos);

#endif