#include <stdio.h>

float soma(float a, float b)
{
   return a + b;
}

float subtracao(float a, float b)
{
   return a - b;
}

float multiplicacao(float a, float b)
{
   return a * b;
}

float divisao(float a, float b)
{
   return a / b;
}

int main()
{
   int escolha;
   float a, b;
   printf("Escreva dois numeros, sendo ambos diferentes de 0: ");
   scanf("%f%f", &a, &b);
   printf("\nEscolha uma opcao de calculo: \n");
   printf("1 - Soma;\n");
   printf("2 - Subtracao;\n");
   printf("3 - Multiplicacao;\n");
   printf("4 - Divisao;\n");
   scanf("%i", &escolha);

   switch (escolha)
   {
   case 1:
      printf("\nResultado: %.1f\n", soma(a, b));
      break;
   case 2:
      printf("\nResultado: %.1f", subtracao(a, b));
      break;
   case 3:
      printf("\nResultado: %.1f", multiplicacao(a, b));
      break;
   case 4:
      printf("\nResultado: %.1f", divisao(a, b));
      break;

   default:
      printf("\nOperacao Invalida");
      break;
   }
   return 0;
}