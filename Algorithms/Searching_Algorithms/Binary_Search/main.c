#include <stdio.h>
#include <stdlib.h>
#include "Binary_Search.h"

uint32 Arr[MAX_SIZE]={11,22,33,44,55,66,77,88,99,111};

int main()
{
    sint32 Ret_Index = ZERO ;
    Ret_Index = Binary_Search_By_Recursion (Arr , 0,MAX_SIZE -1 , 66);
    if (ELEMENT_NOT_FOUD == Ret_Index)
    {
        printf("Element is not found in your data !!\n");
    }
    else
    {
        printf("Element is found with index = %i \n", Ret_Index);
    }

    Ret_Index = Binary_Search_By_Recursion (Arr , 0,MAX_SIZE -1 , 1111);
    if (ELEMENT_NOT_FOUD == Ret_Index)
    {
        printf("Element is not found in your data !!\n");
    }
    else
    {
        printf("Element is found with index = %i \n", Ret_Index);
    }

    printf("\n**********************************\n\n");

    Ret_Index = Binary_Search (Arr , MAX_SIZE , 111);
    if (ELEMENT_NOT_FOUD == Ret_Index)
    {
        printf("Element is not found in your data !!\n");
    }
    else
    {
        printf("Element is found with index = %i \n", Ret_Index);
    }

    Ret_Index = Binary_Search (Arr , MAX_SIZE , 1111);
    if (ELEMENT_NOT_FOUD == Ret_Index)
    {
        printf("Element is not found in your data !!\n");
    }
    else
    {
        printf("Element is found with index = %i \n", Ret_Index);
    }
    return 0;
}
