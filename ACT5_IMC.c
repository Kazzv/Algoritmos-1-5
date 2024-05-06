#include <stdio.h>

int main(void) {
  float peso, altura, imc;

  printf ("Ingrese su peso: \n");
  scanf ("%f", &peso);
  
  printf ("Ingrese su altura: \n");
  scanf ("%f", &altura);

  imc = peso / (altura * altura);

  if (imc < 18.5) {
    printf ("Su IMC es de: %.2f, por lo tanto es bajo", imc);
  } else if (imc >= 18.5 && imc <= 24.99999) {
    printf ("Su IMC es de: %.2f, por lo tanto es normal", imc);
  } else if (imc >= 25 && imc <= 29.9999) {
    printf ("Su IMC es de: %.2f, por lo tanto tiene sobrepeso", imc);
  } else {
    printf ("Su IMC es de: %.2f, por lo tanto tiene obesidad.", imc);
  }
  return 0;
}