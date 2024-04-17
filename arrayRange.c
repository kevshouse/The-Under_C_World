/*
Range: Subtract the minimum value from the maximum value. This measures the spread of the data.
To accomplish this, I will use array_max and array_min values.
*/
#include <stdio.h>

// Finds the minimum value in an array using a simple linear search algorithm.
long long int array_minima(long long int arr[], size_t size) {
    size_t i;  // Loop iterator
    long long int minimum_value = arr[0]; // Initialize the minimum value         with the first element of the array.
    for (i = 1; i < size; i++) {
            // Compare each element with the current minimum value and update             it if necessary.
        //minimum_value = lower_of_two_ints(arr[i], minimum_value);
        if (arr[i] < minimum_value) {
          minimum_value = arr[i];
        }
    }

    return minimum_value;
}
// array_max function
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


long long int arraySize(long long int* arr){
    long long int *start = arr;
    long long int *end = arr + 4;  // pointer         to the last element
    int size = end - start;
  return size;
}

long long int arrayRange(long long int* arr){
      int size = arraySize(arr);
      long long int max = array_maxima(arr, size );
      long long int min = array_minima(arr, size);
      long long int range = max - min;
      return range;  
}

int main(void) {
  long long int Myarray[5] = {2, 4, 9 };
  int size = arraySize(Myarray);
  long long int lower = array_minima(Myarray, size);
  long long int upper = array_maxima(Myarray, size);
  printf("upper: %lld\n", upper);
  printf("lower: %lld\n", lower);
  printf("difference: %lld\n", upper - lower);
  printf("Array size: = : %d\n",size);
  printf("Func arrayRange says the range is: = %lld\n", arrayRange(Myarray));
  
  return 0;
}