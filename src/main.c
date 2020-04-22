/*****************************************************************************
 * main.c:                                                                   *
 *                Executable code.                                           *
 *                                                                           *
 *                Contains the necessary library include directive,          *
 *                declares the main variables, and calls                     *
 *                the wrapper functions prepare_CA, CA_evolve                *
 *                that run the Elementary Cellular Automation                *
 *                with evolution rule 102.                                   *
 *****************************************************************************/

#include "core.h"

int main(int argc, char ** argv)
{
    int *old_CA;
    int *cur_CA;
    int cells;
    int steps;
    int input;
    
    prepare(&cells, &steps, &input, argc, argv, &cur_CA, &old_CA);
    evolve(&cur_CA, &old_CA, cells, steps);

    free(cur_CA);
    free(old_CA);

    return 0;
}

