# Elemetary Cellular Automaton Rule 102

Author: Karkanis Rafail

e-mail: rkarkanis@uth.gr

## Implementation:
**Programming Language: ISO/IEC 9899:1990 (C90)**

Prints in the terminal the evolution of an Elementary Cellular Automaton with rule 102.
The hashtag symbol (#) is used for ALIVE cells and the dash symbol (-) for DEAD cells.

Number of cells, steps, and the initial state can be given by user from the terminal.
See examples below.

## Default settings:
* Cells: 30
* Steps: 30
* Initial State: Only middle cell ALIVE

## Compile/Run Code via terminal
### Windows (cl compiler needed):
`cls && cl /W4 main.c core.c settings.c eca.c display.c && main {# of cells} {# of evolution steps} {initial state input number in decimal form}`

##### Example (default settings):
`cls && cl /W4 main.c core.c settings.c eca.c display.c && main`

### Linux (gcc compiler needed):
`clear && gcc -Wall -ansi main.c core.c settings.c eca.c display.c -o main.out && ./main.out {# of cells} {# of evolution steps} {initial state input number in decimal form}`

##### Example (10 cells, 20 steps, 20 input):
`clear && gcc -Wall -ansi main.c core.c settings.c eca.c display.c -o main.out && ./main.out 10 20 20`

### Linux (cc compiler needed):
`clear && cc -Wall -ansi main.c core.c settings.c eca.c display.c -o main.out && ./main.out {# of cells} {# of evolution steps} {initial state input number in decimal form}`

##### Example (20 cells, 20 steps, default initial state: only middle alive):
`clear && cc -Wall -ansi main.c core.c settings.c eca.c display.c -o main.out && ./main.out 20 20`