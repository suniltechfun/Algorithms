
/* C implementation QuickSort */
#include<stdio.h>

// A utility function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
   the pivot element at its correct position in sorted
    array, and places all smaller (smaller than pivot)
   to left of pivot and all greater elements to right
   of pivot */
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

//#define SWAP(x, y) do { typeof(x) SWAP = x; x = y; y = SWAP; } while (0)

int getPivotIndex( int arr[], int left, int right)
{
	return arr[right];
}

int my_partition2( int arr[], int  left, int  right)
{
	int piv = arr[left], l = left + 1, r = right;
    while (l < r)
    {
      if (arr[l] <= piv)
        l++;
      else
        swap(&arr[l], &arr[--r]);
    }
    swap(&arr[l], &arr[left]);
    return l;
}

int my_partition( int arr[], int  left, int  right)
{
	int pivotIndex = getPivotIndex(arr, left, right);
	//printf("arr[pivotIndex];%d\n", arr[pivotIndex]);
	//printf("arr[high]:%d\n", arr[right]);

    left = left + 1;
    int i = left - 1;  // Index of smaller element

    for(int j = left; j <= right - 1; j++) {
     	if (arr[j] <= arr[pivotIndex]) {
       		i++;
       		swap(&arr[i], &arr[j]);
       	}
    }
    swap(&arr[i+1], &arr[pivotIndex]);
    return (i+1);
}

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,
  low  --> Starting index,
  high  --> Ending index */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        //int pi = partition(arr, low, high);
        int pi = my_partition2(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Driver program to test above functions
int quick_sort_main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    quickSort(arr, 0, n-1);
    printf("Sorted array: ");
    printArray(arr, n);
    return 0;
}
