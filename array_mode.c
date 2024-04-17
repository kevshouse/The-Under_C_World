#include <stdio.h>
#include <stdlib.h>

int

*array_mode(int arr[], size_t size, size_t*

 modeCount) {
    int maxFrequency = 0;
    *modeCount = 0;
    int*modeValues = (int*)malloc(size * sizeof(int));
    int*frequencyArray = (int*)calloc(size, sizeof(int));

    for (size_t i = 0; i < size; i++) {
        frequencyArray[arr[i]]++;
        if (frequencyArray[arr[i]] > maxFrequency) {
            maxFrequency = frequencyArray[arr[i]];
        }
    }

    if (maxFrequency > 1) {
        for (size_t i = 0; i < size; i++) {
            if (frequencyArray[arr[i]] == maxFrequency) {
                modeValues[*modeCount] = arr[i];
                (*modeCount)++;
            }
        }
    }

    free(frequencyArray);
    return modeValues;
}

void printArray(int arr[], size_t size) {
    printf("{ ");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}

void testArrayMode(int arr[], size_t size) {
    size_t modeCount = 0;
    int* modeResult = array_mode(arr, size, &modeCount);

    printf("Input Array: ");
    printArray(arr, size);

    if (modeCount == 0) {
        printf("No mode value found.\n");
    } else {
        printf("Mode value(s): ");
        for (size_t i = 0; i < modeCount; i++) {
            printf("%d ", modeResult[i]);
        }
        printf("\n");
    }

    free(modeResult);
}

int main(void) {
    int arr1[] = {1, 2, 2, 3, 4, 4, 4, 5, 5, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};

    printf("Test Case 1:\n");
    testArrayMode(arr1, sizeof(arr1) / sizeof(int));

    printf("\nTest Case 2:\n");
    testArrayMode(arr2, sizeof(arr2) / sizeof(int));

    printf("\nTest Case 3:\n");
    testArrayMode(arr3, sizeof(arr3) / sizeof(int));

    return 0;
}