#include <stdio.h>
#include <stdlib.h>
#include "Linear_Search.h"

uint32 Arr[MAX_SIZE]={10,20,30,40,50,60,70,80,90,111};


int main()
{
    sint32 Ret_Index = ZERO ;

    Ret_Index = Linear_Search (Arr,MAX_SIZE,111);
    if (ELEMENT_NOT_FOUD == Ret_Index)
    {
        printf("Element is not found in your data !!\n");
    }
    else
    {
        printf("Element is found with index = %i \n", Ret_Index);
    }

    Ret_Index = Linear_Search (Arr,MAX_SIZE,555);
    if (ELEMENT_NOT_FOUD == Ret_Index)
    {
        printf("Element is not found in your data !!\n");
    }
    else
    {
        printf("Element is found with index = %i \n", Ret_Index);
    }

    printf("\n**********************************\n\n");

    Ret_Index = Linear_Search_Two_Directions (Arr,MAX_SIZE,90);
    if (ELEMENT_NOT_FOUD == Ret_Index)
    {
        printf("Element is not found in your data !!\n");
    }
    else
    {
        printf("Element is found with index = %i \n", Ret_Index);
    }

    Ret_Index = Linear_Search_Two_Directions (Arr,MAX_SIZE,555);
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


