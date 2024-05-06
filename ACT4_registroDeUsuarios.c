#include <stdio.h>
#include <string.h>

int main (void) {
    char usuario[10], estudiante[3];
    int edad;

    printf ("Ingrese su nombre: \n");
    scanf ("%s", &usuario);

    printf ("Ingrese su edad: \n");
    scanf ("%d", &edad);

    printf ("Actualmente es estudiante?\n");
    scanf ("%s", &estudiante);

    if (strcmp (estudiante, "si") == 0) {
        printf ("Felicidades %s, usted tiene un descuento por ser estudiante.", usuario);
    } else {
        printf ("Por el momento no cuenta con un descuento de estudiante.");
    }
return 0;
}