#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int size)
{
   int i, j;
   for (i = 0; i < size; i++)
   {
      int i_maior = i;

      for (j = i + 1; j < size; j++)
      {
         if (arr[j] < arr[i_maior])
         {
            i_maior = j;
         }
      }
      int aux = arr[i];
      arr[i] = arr[i_maior];
      arr[i_maior] = aux;
   }
}

void printArray(int arr[], int n)
{
   int i;
   for (i = 0; i < n; i++)
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
   selectionSort(arr, n);
   printf("Array ordenado: ");
   printArray(arr, n);

   return 0;
}