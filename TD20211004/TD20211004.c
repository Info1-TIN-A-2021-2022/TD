/*
    Structure of a C file
    2021, october 4th
    by πR

    Creation of a C file from scratch

    Compilation :            gcc TD20211004.c
    Execution   :            ./a.out
    Get the returned value : echo $?
*/

// the file included below (stdio.h) contains the description of the way
// to use the printf function
#include <stdio.h>    


int main(int argc, char const *argv[])
{ // begining of the block

    // the definition of the way to use this function is exposed in
    // the header file stdio.h
    printf("Hello\n"); 

    // this is the returned value of this software
    return 0;
    
} // end of the block
