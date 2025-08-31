// C++ Program to demonstrate how to implement the quick
// sort algorithm
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {

    // Selecting last element as the pivot
    int pivot = arr[high];//pivot=5/8

    // Index of elemment just before the last element
    // It is used for swapping
    int i = (low - 1);//i=-1;/-1

    for (int j = low; j <= high - 1; j++) {

        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot) {//10<=5 F/5<=8
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Put pivot to its position
    swap(arr[i + 1], arr[high]);//5,7,8,9,1,10

    // Return the point of partition
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {

    // Base case: This part will be executed till the starting
    // index low is lesser than the ending index high
    if (low < high) {

        // pi is Partitioning Index, arr[p] is now at
        // right place
        int pi = partition(arr, low, high);

        // Separately sort elements before and after the
        // Partition Index pi
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);//6

  	// Calling quicksort for the vector vec
    quickSort(arr, 0, n - 1);//arr[],0,5

    for (int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
