// Finds the minimum value in an array using a simple linear search algorithm.
#include <stdio.h>

/*Untidy first draft
int lower_of_two_ints(int a, int b)
{
    return (a < b) ? a : b;
}
int array_minima(int arr[], int size)
{
  int i = 0;
  int memo = 0;
  for (i = 1; i < size; i++) {
      memo = lower_of_two_ints(arr[i], memo);
  }
  return (memo);
}
*/
// The smallest of two ints
long long int lower_of_two_ints(long long int a, long long int b) {
    return (a < b) ? a : b;
}
// Finds the minimum value in an array using a simple linear search algorithm.
long long int array_minima(long long int arr[], size_t size) {
    size_t i;  // Loop iterator
    long long int minimum_value = arr[0];  // Initialize the minimum value         with the first element of the array.
    for (i = 1; i < size; i++) {
            // Compare each element with the current minimum value and update             it if necessary.
        minimum_value = lower_of_two_ints(arr[i], minimum_value);
    }

    return minimum_value;
}

int arr[] = {1,2,3,4,5,6,-7,8,9,10,-8,-8,-1,};
int sizeOfarr = sizeof(arr) / sizeof(*arr);
int main(void) 
{
  printf("Hello World\n");
  printf("Length of array = %d\n", sizeOfarr);
  printf("Minima of array = %d\n", array_minima(arr,sizeOfarr));

  return 0;
}