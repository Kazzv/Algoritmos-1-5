#include <stdio.h>

int main(void) {
  float compra, descuento;

  printf ("Ingrese el total de su compra: ");
  scanf ("%f", &compra);

  if (compra > 100) {
    descuento = compra * .90;
      printf ("El precio es: %.2f felicdades, usted tiene un descuento", descuento);
  } else {
    printf ("Su compra no cuenta con descuento.");
  }
  return 0;
}