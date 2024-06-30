#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
   int t = *a;
   *a = *b;
   *b = t;
}

int partition(int arr[], int low, int high)
{
   int pivot = arr[high]; // pivot gets the higher value
   int i = (low - 1);     // i gets a position left to the lowest position

   for (int j = low; j < high; j++)
   {
      // If the element is lower than pivot
      if (arr[j] <= pivot)
      {
         i++;
         swap(&arr[i], &arr[j]); // switch elements using pointers
      }
   }
   swap(&arr[i + 1], &arr[high]);
   return (i + 1); // return pivot new index
}

void quicksort(int arr[], int low, int high)
{
   if (low < high)
   {
      // arr[p] is in corret place
      int p = partition(arr, low, high);

      /*Separation and classification
       of elements left and right the pivot*/
      quicksort(arr, low, p - 1);
      quicksort(arr, p + 1, high);
   }
}

void printArray(int arr[], int size)
{
   int i;
   for (i = 0; i < size; i++)
   {
      printf(" %d ", arr[i]);
   }
   printf("\n");
}

int main()
{
   int arr[] = {15, 40, 23, 13};
   size_t n = sizeof(arr) / sizeof(arr[0]);
   printf("Array original:");
   printArray(arr, n);
   quicksort(arr, 0, n - 1);
   printf("Array ordenado: ");
   printArray(arr, n);

   return 0;
}