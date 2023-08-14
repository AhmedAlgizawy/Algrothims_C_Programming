#include "Bubble_Sort.h"

static void Swap_Two_Numbers (uint32 *Ptr_Num_1 , uint32 *Ptr_Num_2)
{
    uint32 Temp = ZERO ;
     Temp      = *Ptr_Num_1 ;
    *Ptr_Num_1 = *Ptr_Num_2 ;
    *Ptr_Num_2 =  Temp  ;
}
void Bubble_Sort (uint32 My_Arr[] , uint32 Length_Arr)
{
    uint8  Check_Swap = ZERO ;
    uint16 Count_1 = ZERO , Count_2    = ZERO ;
    for (Count_1 = ZERO ; Count_1 < (MAX_SIZE - 1) ; Count_1++)
    {
        for (Count_2 = ZERO ; Count_2 < (MAX_SIZE - Count_1 - 1) ; Count_2++)
        {
            if (My_Arr[Count_2]>My_Arr[Count_2+1])
            {
                Swap_Two_Numbers(&My_Arr[Count_2],&My_Arr[Count_2+1]);
                Check_Swap = 1 ;
            }
        }
        if (!Check_Swap)
        {
            printf("Data is already  sorted!!\n");
            return ;
        }
    }
}

void Print_Array(uint32 My_Arr[] , uint32 Length_Arr)
{
    uint16 Count_1 = ZERO ;

    printf("Data");
    for (Count_1 = ZERO ; Count_1 < (MAX_SIZE) ; Count_1++)
    {
        printf (" => %i",My_Arr[Count_1]);
    }
    printf("\n");
}

