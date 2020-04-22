#include "settings.h"

int init_cells_number(const int param, const char * val)
{
    if (param < 2) {
        printf("Default # of cells loaded; %d\n", CELLS);
        return CELLS;
    } else if (atoi(val) < 0) {
        fprintf(stderr, "# of cells must be non-negative number.\n");
        exit(EXIT_FAILURE);
    } else {
        printf("Cells: %d\n", atoi(val));
        return atoi(val);
    }
}

int init_steps_number(const int param, const char * val)
{
    if (param < 3) {
        printf("Default evolution steps loaded; %d\n", STEPS);
        return STEPS;
    } else if (atoi(val) < 0) {
        fprintf(stderr, "Steps must be non-negative number.\n");
        exit(EXIT_FAILURE);
    } else {
        printf("Steps: %d\n", atoi(val));
        return atoi(val);
    }
}

int init_input_number(const int param, const char * val)
{
    
    if (param < 4) {
        printf("Default CA loaded; only middle cell alive\n");
        return -1;
    } else if (atoi(val) < 0) {
        fprintf(stderr, "Input must be non-negative number.\n");
        exit(EXIT_FAILURE);
    } else
        return atoi(val);
}