#include "Binary_Search.h"


sint32 Binary_Search (uint32 Array[] ,uint32 Length_Arr ,uint32 Search_Elem)
{
    sint32 First_Index = ZERO ;
    sint32 Mid_Index   = ZERO ;
    sint32 Last_Index  = (Length_Arr - 1) ;

    while (First_Index <= Last_Index)
    {
        Mid_Index = (First_Index + (Last_Index - First_Index)/2) ;

        if (Search_Elem == Array[Mid_Index])
        {
            return Mid_Index ;
        }
        else if (Search_Elem < Array[Mid_Index])
        {
            Last_Index = Mid_Index - 1 ;
        }
        else
        {
            First_Index = Mid_Index +1 ;
        }
    }
    return -1 ;
}


sint32 Binary_Search_By_Recursion (uint32 Array[] ,uint32 First_Index ,uint32 Last_Index ,uint32 Search_Elem)
{
    sint32 Mid_Index   = ZERO ;

    while (First_Index <= Last_Index)
    {
        Mid_Index = (First_Index + (Last_Index - First_Index)/2) ;

        if (Search_Elem == Array[Mid_Index])
        {
            return Mid_Index ;
        }
        else if (Search_Elem < Array[Mid_Index])
        {
            return Binary_Search_By_Recursion (Array,First_Index,Mid_Index-1,Search_Elem) ;
        }
        else
        {
            return Binary_Search_By_Recursion (Array,Mid_Index + 1,Last_Index,Search_Elem) ;
        }
    }
    return -1 ;
}
