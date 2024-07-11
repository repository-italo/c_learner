#include <stdio.h>
#include <stdlib.h>

// Funcao para mesclar duas sub-listas ordenadas arr[l...m] e arr[m+1 ... r]

void merge(int arr[], int l, int m, int r)
{
   int i, j, k;
   int n1 = m - l + 1; // Tamanho do primeiro subarray
   int n2 = r - m;     // Tamanho do segundo subarray

   // Cria arrays temporarios
   int L[n1], R[n2];
   // Preenche o array L com todos os elementos até a posicao (n1 - 1)
   for (i = 0; i < n1; i++)
      L[i] = arr[l + i];
   // Preenche o array R com todos os elementos até a posicao (n2 - 1)
   for (j = 0; j < n2; j++)
      R[j] = arr[m + 1 + j];

   // Mescla os arrays temporarios de volta para arr[l ... r]
   i = 0; // Indice inicial do primeiro subarray
   j = 0; // Indice inicial do array mesclado
   k = l; // Indice do array de entrada
   while (i < n1 && j < n2)
   {
      // O array L precisa ter todos os elementos menores
      if (L[i] <= R[j])
      {
         arr[k] = L[i];
         i++;
      }
      // Enquanto os maiores estão no array R
      else
      {
         arr[k] = R[j];
         j++;
      }
      // Itera o indice do array principal
      k++;
   }

   // Copia os elementos restantes de L[], se houver algum
   while (i < n1)
   {
      arr[k] = L[i];
      i++;
      k++;
   }

   // Copia os elementos restantes de R[], se houver algum
   while (j < n2)
   {
      arr[k] = R[j];
      j++;
      k++;
   }
}

// Funcao principal que implementa o merge sort
void mergeSort(int arr[], int l, int r)
{
   if (l < r)
   {
      // Calcula o ponto medio do array
      int m = l + (r - l) / 2;

      // Ordena a primeira e a segunda metade
      mergeSort(arr, l, m);
      mergeSort(arr, m + 1, r);

      // Mescla as duas metades
      merge(arr, l, m, r);
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
   int arr[] = {3, 6, 1, 7, 2};
   size_t n = sizeof(arr) / sizeof(arr[0]);
   printf("Array original: ");
   printArray(arr, n);
   mergeSort(arr, 0, n);
   printf("Array ordenado: ");
   printArray(arr, n);
   return 0;
}