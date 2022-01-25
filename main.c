#include <stdio.h>
#include <stdlib.h>

 double calcula_Potencia(double base, double exp){
  double i, result;
  result=1;

   for(i=1;i<=exp;i++){
    result= result * base;
   }
    return 0;
 }

int main()
{

   double base, exp,potencia;
    printf("Digite o valor da base: \n");
    scanf("1f",&base);
    printf("\nDigite o valor do expoente: ");
    scanf("%1f", &exp);

    potencia = calcula_Potencia(base, exp);
    printf("O resultado eh %1f", potencia);
    return 0;
}
