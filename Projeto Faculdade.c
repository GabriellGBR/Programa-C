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

   printf("Valor IMC: %.2f", IMC);

   printf("\n\nIMC = peso / (altura * altura)");
     printf("\n\nIMC calculado   Situacao");
     printf("\n------------------------------");
     printf("\nMenos de 20     Abaixo do peso");
     printf("\n20 >= IMC < 25  Peso Normal");
     printf("\n25 >= IMC < 30  Acima do peso");
     printf("\n30 >= IMC < 34  Obeso");
     printf("\nAcima de 34     Muito Obeso");
     printf("\n------------------------------");

}