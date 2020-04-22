/*****************************************************************************
 * settings.h:                                                               *
 *                    Header file contains necessary include directives,     *
 *                    define directives, function signatures                 *
 *                    and their descriptions                                 *
 *                    regarding the default and/or user's settings           *
 *                    of the Elementary Cellular Automaton:                  *
 *                    the number of cells, evolution steps, initial state.   *
 *****************************************************************************/

#ifndef SETTINGS
#define SETTINGS

#include <stdio.h>
#include <stdlib.h>

#define CELLS 30            /* default # of cells */
#define STEPS 30            /* default # of iterations to simulate */

/*****************************************************************************
 * init_cells_number:    Returns number of cells from the first parameter    *
 *                       when running the program.                           *
 *                       Returns default cells number if no parameter is set.*
 *                       Terminates program is negative number is given.     *
 *****************************************************************************/
int init_cells_number(const int param, const char * val);

/*****************************************************************************
 * init_steps_number:    Returns number of evolution steps                   *
 *                       from the second parameter when running the program. *
 *                       Returns default steps number if no parameter is set.*
 *                       Terminates program is negative number is given.     *
 *****************************************************************************/
int init_steps_number(const int param, const char * val);

/*****************************************************************************
 * init_input_number:    Returns number of cells from the third parameter    *
 *                       when running the program.                           *
 *                       If no parameter is set, returns a -1 flag           *
 *                       that is used by function init_eca                   *
 *                       to initialize default initial state.                *
 *                       Terminates program is negative number is given.     *
 *****************************************************************************/
int init_input_number(const int param, const char * val);

#endif