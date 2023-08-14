#include <stdio.h>
#include <stdlib.h>
#include "Insertion_Sort.h"

uint32 Arr_1[MAX_SIZE]={77,44,99,22,55,66,11,88,33,111};

int main()
{
    Print_Array(Arr_1,MAX_SIZE);
    Insertion_Sort(Arr_1,MAX_SIZE);
    Print_Array(Arr_1,MAX_SIZE);

    return 0;
}
