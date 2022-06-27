#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
   int valor;
   cout<<"\nInforme um numero de 1 a 12 correspondente ao mes desejado: ";
   cin>>valor;
   switch (valor)
   {
   case 1: case 2: case 3:
   printf ("\nEste mes corresponde ao Primeiro trimestre\n");
     break;
     case 4: case 5: case 6:
   printf ("\nEste mes corresponde ao Segundo trimestre\n");
     break;
     case 7: case 8: case 9:
   printf ("\nEste mes corresponde ao Terceiro trimestre\n");
     break;
     case 10: case 11: case 12:
   printf ("\nEste mes corresponde ao Quarto trimestre\n");
     break;
   default:
   printf ("\nValor invalido\n");
     break;
   }

   return 0;
}







