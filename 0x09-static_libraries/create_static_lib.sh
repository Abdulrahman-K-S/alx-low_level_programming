#!/bin/bash
gcc -c *.c -e *.o # Compiles .c code into object code (.o).
ar rc liball.a *.o # Creates an archive from those object code.
rm *.o # Removes the .o code.
