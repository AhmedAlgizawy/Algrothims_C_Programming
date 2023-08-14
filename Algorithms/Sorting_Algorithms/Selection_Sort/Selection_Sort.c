#include "Selection_Sort.h"

void Swap_Two_Numbers (uint32 *Ptr_Num_1 , uint32 *Ptr_Num_2)
{
    uint32 Temp = ZERO ;
     Temp      = *Ptr_Num_1 ;
    *Ptr_Num_1 = *Ptr_Num_2 ;
    *Ptr_Num_2 =  Temp  ;
}
void Selection_Sort (uint32 My_Arr[] , uint32 Length_Arr)
{
    uint32 Count_1 = ZERO;
    uint32 Count_2 = ZERO ;
    uint32 Min_Index = ZERO ;

    for (Count_1 = ZERO ; Count_1 < MAX_SIZE - 1 ; Count_1++)
    {
        Min_Index = Count_1;
        for (Count_2 = (Count_1 + 1) ; Count_2 < MAX_SIZE ; Count_2++)
        {
            if (My_Arr[Count_2] < My_Arr[Min_Index])
            {
                Min_Index =  Count_2;
            }
        }
        Swap_Two_Numbers(&My_Arr[Count_1],&My_Arr[Min_Index]);
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


