/*Jhonathan Camarena Cédula: 8-1038-738 Fecha: 1/10/2026*/
#include <stdio.h>

int main() {
    int i;
    int cantidadProf;
    float salario, saltotal;

    // Inicialización del acumulador
    saltotal = 0;

    printf("\nCalculo de Salarios de Profesores\n");

    // Se le solicita al usuario la cantidad de profesores
    printf("¿Cuantos profesores desea ingresar?: ");
    scanf("%d", &cantidadProf);

    // Inicialización de la variable de control
    i = 1;

    // Ciclo repetitivo controlado por la cantidad ingresada por el usuario
    while (i <= cantidadProf) {
        printf("\nIngrese el salario del profesor %d: \t", i);
        scanf("%f", &salario);

        saltotal = saltotal + salario; // Acumulación
        i = i + 1;                     // Incremento de la variable de control
    }

    printf("\nEl total de salarios de los %d profesores es: %.2f\n", cantidadProf, saltotal);

    return 0;
}
