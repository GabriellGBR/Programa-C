#include <stdio.h>
#include <math.h>

int main(){
   float IMC,peso,altura;
   printf("Digite o peso\n> ");
   scanf("%f",&peso);
   printf("Digite a altura\n> ");
   scanf("%f",&altura);

   altura = pow(altura,2);
   IMC = peso/altura;
}