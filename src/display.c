#include "display.h"

void disp(const int * eca, const int len)
{
    int i;

    for (i = 0; i < len; i++)
        if (eca[i])
            printf("#");
        else
            printf("-");
    printf("\n");
}