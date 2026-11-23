#include "sorting.h"

void SelectionSort(int arr[], int N) {

    // Start with the whole array as unsored and one by
  	// one move boundary of unsorted subarray towards right
    for (int i = 0; i < N - 1; i++) {

        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Swap the found minimum element with the first
        // element in the unsorted part
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}