/*
 @author      : Hussien Saleh 
 an application to search for a number in array using binary search
 */

#include "../include/binarysearch.h"

int main(){

    uint32 arr[ARRAY_SIZE]; // array input by the user 
    uint32 number; // number entered by the user to be searched in the array

    /* input the number required for search by the user */
    printf("please enter the number you want to search for: ");
    scanf("%d", &number);

    /* input the array required by the user */
    printf("please enter the array numbers: ");
    for(uint32 index = 0; index < ARRAY_SIZE; index++)
        scanf("%d", &arr[index]);

    /* input the array required by the user */
    printf("\nInput array entered by the user: ");
    printArr(arr);
    
    /* sorting the array if it is not sorted */
    if (!isArrSorted(arr))
        sortArr(arr);

    /* printing if the number is found in the array or not */
    if(binarySearch(arr, ARRAY_SIZE, number)!= -1)
        printf("\nthe number specified is found in the array\n");
    else
        printf("\nthe number specified does not exist in the array\n");
    
    return 0;
}
