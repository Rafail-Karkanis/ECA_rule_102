#include "eca.h"

void alloc_eca(int ** eca, const int len)
{
    if ((*eca = (int *) malloc(len * sizeof(int))) == NULL) {
        fprintf(stderr, "Failed to allocate memory for CA.\n");
        exit(EXIT_FAILURE);
    }
}

void init_eca(int ** eca, const int len, int * usr_in)
{
    int i;

    for (i = 0; i < len; i++)
        (*eca)[i] = DEAD;

    if (*usr_in == -1)
        (*eca)[len / 2] = ALIVE;      /* default condition */
    else
        dec2eca(eca, len, usr_in);    /* user input */
}

void dec2eca(int ** eca, const int len, int * dec)
{
    int i;

    i = len - 1;
    while (*dec != 0 && i >= 0) {
        (*eca)[i] = *dec % 2;
        *dec = *dec / 2;
        i--;
    }

    if (*dec * 2 != 0) {
        fprintf(stderr, "Error. Input is too big for given cells.\n");
        exit(EXIT_FAILURE);
    }
}

void cur2prev(int ** dest, const int * src, const int len) {
    
    int i;

    for (i = 0; i < len; i++)
        (*dest)[i] = src[i];
    (*dest)[len] = src[0];    /* periodic boundary condition */
}

void next_cell_state(int ** eca, const int pos, const int val)
{
    (*eca)[pos] = val;
}

int rule_102(const int * prev, const int pos)
{
    return (prev[pos] + prev[pos + 1]) % 2;
}