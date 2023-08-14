#include "Linear_Search.h"


sint32 Linear_Search(uint32 Array[],uint32 Length_Arr,uint32 Element_Search)
{
    sint32 Index = ZERO ;
    for( Index=ZERO ; Index < Length_Arr ; Index++)
    {
        if (Element_Search == Array[Index])
        {
            return Index ;
        }
        else {/*  Nothing  */}
    }
    return -1 ;
}

sint32 Linear_Search_Two_Directions(uint32 Array[],uint32 Length_Arr,uint32 Element_Search)
{
    sint32 Front_Index = ZERO ;
    sint32 Rear_Index  = (Length_Arr - 1) ;

    for( Front_Index=ZERO ; Front_Index < Length_Arr ; Front_Index++)
    {
        if (Element_Search == Array[Front_Index])
        {
            return Front_Index ;
        }
        else
        {
            if (Element_Search == Array[Rear_Index])
            {
                return Rear_Index ;
            }
            else
            {
                Rear_Index--;
            }
        }
    }
    return -1 ;
}
