#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include "typedefs.h"

#define ARRAY_SIZE  10    // max array size is 255

/*
Function used for binary search of a number inside of sorted array 
by using the low, mid and end positions of the array.
@param arr, pointer to an array entered by the user
@param size, the size of the array
@param number, the number to be searched for by the search algorithm

@return the position of the number if found in the array.
*/

sint8 binarySearch(uint32 *arr, uint8 size, uint32 number);

/*
Function used to sort an array  
@param arr, pointer to the array required for sorting
@return 
*/

void sortArr(uint32 *arr);

/*
Function used to print an array  
@param arr, pointer to the array required for printing
@return 
*/

void printArr(uint32* arr);

/*
Function used to check if an array is sorted or not
@param arr, pointer to the array required for checking
@return true if the array is sorted, false otherwise.
*/

bool isArrSorted(uint32* arr); 

#endif