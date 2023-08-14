#ifndef _LINEAR_SEARCH_H
#define _LINEAR_SEARCH_H

#include"Platform_Types.h"

#define ELEMENT_NOT_FOUD -1
#define MAX_SIZE 10

/**
  *@brief Search for one element from one direction.
  *@param (Array) set of data.
  *@param (Length_Arr) length of data.
  *@param (Element_Search) element want o be search.
  *@retval Index of element to be searched.
  */
sint32 Linear_Search(uint32 Array[],uint32 Length_Arr,uint32 Element_Search);

/**
  *@brief Search for one element from teo direction.
  *@param (Array) set of data.
  *@param (Length_Arr) length of data.
  *@param (Element_Search) element want o be search.
  *@retval Index of element to be searched.
  */
sint32 Linear_Search_Two_Directions(uint32 Array[],uint32 Length_Arr,uint32 Element_Search);



#endif // _LINEAR_SEARCH_H
