#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n)
{
   int i, chave, j;

   for (i = 0; i < n; i++)
   {
      chave = arr[i];
      j = i - 1;

      /*Move os elementos da arr[0 .. i-1] que sao maior
      es que a chave para uma uma posicao frente de sua atual*/

      while (j >= 0 && arr[j] > chave)
      {
         arr[j + 1] = arr[j];
         j = j - 1;
      }
      arr[j + 1] = chave;
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
   int arr[] = {6, 14, 9, 3};
   size_t n = sizeof(arr) / sizeof(arr[0]);

   printf("Array Original: ");
   printArray(arr, n);
   printf("Array ordenado: ");
   insertionSort(arr, n);
   printArray(arr, n);
}