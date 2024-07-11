#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int size)
{
   int i, j, temp;
   for (i = 0; i < (size - 1); i++)
   {
      for (j = 0; j < (size - i - 1); j++)
      {
         if (arr[j] > arr[j + 1])
         {
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
         }
      }
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
   int arr[] = {3, 6, 2, 1, 9, 14, 30, 22};
   size_t n = sizeof(arr) / sizeof(arr[0]);

   printf("Array Original: ");
   printArray(arr, n);
   printf("Array ordenado: ");
   bubbleSort(arr, n);
   printArray(arr, n);
}