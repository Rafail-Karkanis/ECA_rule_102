/*****************************************************************************
 * core.h:                                                                   *
 *                Core header file contains necessary include directives,    *
 *                define directives, wrapper function signatures             *
 *                and their descriptions.                                    *
 *****************************************************************************/

#ifndef CORE
#define CORE

#include "settings.h"
#include "eca.h"
#include "display.h"

/* Boundary cell numbers for applying the periodic boundary condition */
#define BOUND_CELLS 1

/*****************************************************************************
 * load_settings:        Wrapper function.                                   *
 *                       Calls functions: init_cells_number,                 *
 *                       init_steps_number, init_input_number.               *
 *****************************************************************************/
void load_settings(int * cells, int * steps, int * input, const int argc,
                   char ** argv);

/*****************************************************************************
 * prepare:        Wrapper function.                                         *
 *                 Calls functions: load_settings, alloc_eca, init_eca,      *
 *                 cur2prev.                                                 *
 *****************************************************************************/
void prepare(int * cells, int * steps, int * input, const int argc,
             char ** argv, int ** cur, int ** prev);


/*****************************************************************************
 * evolve:        Wrapper function.                                          *
 *                Calls functions: disp, cur2prev, next_cell_state,          *
 *                rule_102.                                                  *
 *****************************************************************************/
void evolve(int ** cur_ca, int ** old_ca, const int len, const int steps);

#endif