/*#include <stdio.h>
// This overall function of this file is to return the maximum value of an integer array.

// The largest of two ints
long long int higher_of_two_ints(long long int a, long long int b) {
    return (a > b) ? a : b;
}
// Finds the maximum value in an array using a simple linear search algorithm.
long long int array_maxima(long long int arr[], size_t size) {
    size_t i;  // Loop iterator
    long long int max_value = *arr;  // Initialize the maximum value with the first element of the array.
    for (i = 1; i < size; i++) {
            // Compare each element with the current max value and update it if necessary.
          max_value = higher_of_two_ints(arr[i], max_value);
        }

    return max_value;
}

//int arr[] = {1,2,3,4,5,6,-7,8,9,10,-1, -1,0,};
int arr[] = {1,2,-1,-99,100,-99};
int sizeOfarr = sizeof(arr) / sizeof(*arr);
int main(void) 
{
  printf("Higher of {a,b} = %lld\n", higher_of_two_ints(10, -0));
  printf("n of array = %d\n", arr[5]);
  printf("Length of array = %d\n", sizeOfarr);
  printf("Maxima of array = %d\n", array_maxima(arr,sizeOfarr));
  printf("Maxima of array = %lld\n", array_maxima(arr,sizeOfarr));

  return 0;
}*/
#include <stdio.h>

// Finds the maximum value in an array using a simple linear search algorithm.
long long int array_maxima(long long int arr[], size_t size) {
    size_t i;  // Loop iterator
    long long int max_value = arr[0];  // Initialize the maximum value with the first element of the array.
    for (i = 1; i < size; i++) {
        // Compare each element with the current max value and update it if necessary.
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    return max_value;
}

int main(void) {
    long long int arr[] = {1, 2, -1, -99, 100, -99};
    int sizeOfarr = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    printf("Length of array = %d\n", sizeOfarr);
    printf("Maxima of array = %lld\n", array_maxima(arr, sizeOfarr));

    return 0;
}