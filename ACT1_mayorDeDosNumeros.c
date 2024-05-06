#include <stdio.h>

int main(void) {
  int num1, num2;

  printf ("Ingrese un número: \n");
  scanf ("%d", &num1);

  printf ("Ingrese un segundo número: \n");
  scanf ("%d", &num2);

  if (num1 == num2) {
    printf ("Los numeros son iguales.");
  } else if (num1 > num2) {
  printf ("El primer número es mayor");
  } else {
    printf ("El segundo número es mayor.");
  }
  return 0;
}