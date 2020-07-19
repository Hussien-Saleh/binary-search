#include "../include/binarysearch.h"

void sortArr(uint32 *arr){

    uint32 temp; // temp used for swapping the array values
    printf("\nArray after sorting: ");

    /* sorting the array in ascending order */
    for (uint32 i = 0; i < ARRAY_SIZE-1; ++i) 
    {
        for (uint32 j = i + 1; j < ARRAY_SIZE; ++j)
        {
            if (*(arr+i) > *(arr+j)) 
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;
            }
        }
    }
    printArr(arr); // printing the array
}

bool isArrSorted(uint32* arr){
    
    /* counter starts from the first position of the array till its end 
     if the counter increments till the end of the array, it means the array is sorted*/ 
    
    uint32 count = 0; 
    for (uint32 index = 0; index < ARRAY_SIZE; index++)
    { 
        if (*(arr+index) < *(arr+index+1))      
        {   
            count++;
        }
    }
    if(count == ARRAY_SIZE-1)
        return true;
    else
        return false;
}

sint8 binarySearch(uint32 *arr, uint8 size, uint32 number){

    uint32 low = 0; // first position of the  array
    uint32 high = size-1; // last position

    // if the number is found in the beginning of the array
    if(*(arr+low) == number)
        return low; 
    // if the number is found in the end of the array
    if(*(arr+high) == number)
        return high; 

    while (low <= high)
    {
        uint32 mid = low + (high - low) / 2; // mid position of the array

        if (*(arr+mid) == number)
            return mid;

        if (*(arr+mid) < number)
            low = mid + 1;
        else
            high = mid - 1;
  }
  return -1;
}

void printArr(uint32* arr){

    /* printing an array */
    for(uint32 index = 0; index < ARRAY_SIZE; index++)
        printf(" %d ", arr[index]);
}
