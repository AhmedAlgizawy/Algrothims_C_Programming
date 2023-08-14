#ifndef _BINARY_SEARCH_H
#define _BINARY_SEARCH_H

#include"Platform_Types.h"

#define MAX_SIZE 10
#define ELEMENT_NOT_FOUD -1

/**
  *@brief Search for element.
  *@param (Array) set of data.
  *@param (Length_Arr) length of data.
  *@param (Search_Elem) element want o be search.
  *@retval Index of element to be searched.
  */
sint32 Binary_Search (uint32 Array[] ,uint32 Length_Arr ,uint32 Search_Elem);

/**
  *@brief Search for element by recursion function.
  *@param (Array) set of data.
  *@param (First_Index) index of first data.
  *@param (Last_Index) index of last data.
  *@param (Search_Elem) element want o be search.
  *@retval Index of element to be searched.
  */
sint32 Binary_Search_By_Recursion (uint32 Array[] ,
                                   uint32 First_Index ,
                                   uint32 Last_Index ,
                                   uint32 Search_Elem);


#endif // _BINARY_SEARCH_H
