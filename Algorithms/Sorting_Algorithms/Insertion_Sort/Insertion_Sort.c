#include "Insertion_Sort.h"

void Insertion_Sort (uint32 My_Arr[] , uint32 Length_Arr)
{
    uint16 Insert_Index = ZERO ;
    sint16 CMP_Index    = ZERO ;
    uint32 Temp         = ZERO ;

    for (Insert_Index = 1 ; Insert_Index < MAX_SIZE ; Insert_Index++)
    {
        Temp = My_Arr[Insert_Index];
        //CMP_Index = (Insert_Index - 1);
/*
        while( (Temp < My_Arr[CMP_Index]) && (CMP_Index >= ZERO))
        {
            My_Arr[CMP_Index+1]=My_Arr[CMP_Index];
            CMP_Index--;
        }
        My_Arr[CMP_Index+1]=Temp;

*/
        for (CMP_Index = (Insert_Index - 1) ; CMP_Index >= ZERO ; CMP_Index--)
        {
            if (Temp < My_Arr[CMP_Index])
            {
                My_Arr[CMP_Index+1]=My_Arr[CMP_Index];
                My_Arr[CMP_Index]=Temp;
            }
            else{
                break;
            }

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

