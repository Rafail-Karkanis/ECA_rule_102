#include "core.h"

void load_settings(int * cells, int * steps, int * input, const int argc,
                   char ** argv)
{
    *cells = init_cells_number(argc, argv[1]);
    *steps = init_steps_number(argc, argv[2]);
    *input = init_input_number(argc, argv[3]);
}

void prepare(int * cells, int * steps, int * input, const int argc,
             char ** argv, int ** cur, int ** prev)
{
    load_settings(cells, steps, input, argc, argv);

    alloc_eca(cur, *cells);
    alloc_eca(prev, *cells + BOUND_CELLS);

    init_eca(cur, *cells, input);

    cur2prev(prev, *cur, *cells);
}

void evolve(int ** cur_ca, int ** old_ca, const int len, const int steps)
{
    int t, i;

    for (t = 0; t < steps; t++) {
        disp(*cur_ca, len);
        cur2prev(old_ca, *cur_ca, len);

        for (i = 0; i < len; i++)
            next_cell_state(cur_ca, i, rule_102(*old_ca, i));
    }
}