#include <stdio.h>
#include <stdlib.h>
#include "Bubble_Sort.h"


uint32 Arr_1[MAX_SIZE]={11,22,33,44,55,66,77,88,99,111};
uint32 Arr_2[MAX_SIZE]={77,44,99,22,55,66,11,88,33,111};

int main()
{
    Print_Array(Arr_1,MAX_SIZE);
    Bubble_Sort(Arr_1,MAX_SIZE);
    printf("********************************\n");
    Print_Array(Arr_2,MAX_SIZE);
    Bubble_Sort(Arr_2,MAX_SIZE);
    Print_Array(Arr_2,MAX_SIZE);
    return 0;
}
