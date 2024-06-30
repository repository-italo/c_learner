#include <stdio.h>

int main()
{
   int arr[] = {10, 5, 7, 3, 2, 12};
   int n = sizeof(arr) / sizeof(arr[0]), i;

   for (i = 0; i < n; i++)
   {
      printf(" %d ", arr[i]);
   }

   return 0;
}