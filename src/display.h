/*****************************************************************************
 * display.h:                                                                *
 *                   Header file contains necessary include directives,      *
 *                   function signatures and their descriptions              *
 *                   for displaying the evolution                            *
 *                   of the Elementary Cellular Automaton.                   *
 *****************************************************************************/

#ifndef DISPLAY
#define DISPLAY

#include <stdio.h>

/*****************************************************************************
 * disp:     Prints the evolution of the Cellular Automaton.                 *
 *           Dead cells are represented by the dash symbol (-).              *
 *           Alive cells are represented by the hashtag symbol (#).          *
 *****************************************************************************/
void disp(const int * eca, const int len);

#endif