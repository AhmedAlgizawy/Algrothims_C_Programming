#include <stdio.h>
#include <stdlib.h>
#include "Selection_Sort.h"

uint32 Arr_1[MAX_SIZE]={77,33,88,22,55,66,11,88,33,111};

int main()
{

    Print_Array(Arr_1,MAX_SIZE);
    Selection_Sort(Arr_1,MAX_SIZE);
    Print_Array(Arr_1,MAX_SIZE);

    return 0;
}
