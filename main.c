#include <stdio.h>
#include <stdlib.h>
#include "funcionesSuRMDF.h"

/**
 * El programa se encarga de cargar operandos y calcular varias operaciones sobre los mismos.
 *
 */
int main() {
    int menu = 0, resuFacB = 0, resuFacA = 0;
    float resuDiv = 0, a = 0, b = 0, resuResta = 0, resuSuma = 0, resuMulti = 0;
    do {

        printf("                    Menu\n\n");
        printf("1 - Ingresar 1er operando (A=%lf)\n", a);
        printf("2 - Ingresar 2er operando\n (B=%lf)\n", b);
        printf("3 - Calcular todas las operaci%cnes\n", 162);
        printf("4 - Informar resultados\n");
        printf("5 - Salir\n");
        scanf("%d", &menu);
        system("cls");

        if (menu == 1) {
            a = cargar();
        }

        if (menu == 2) {
            b = cargar();
        }

        if (menu == 3) {
            resuSuma = suma(a, b);
            resuResta = resta(a, b);
            resuMulti = multi(a, b);
            if (b != 0) {
                resuDiv = division(a, b);
            }
            if (a != 0 && b != 0) {
                resuFacA = factorial(a);
                resuFacB = factorial(b);

            } else
                printf("No se puede realizar un factorial sobre un numero negativo.\n");

        }

        if (menu == 4) {
            printf("El resultado de sumar es: %lf\n Resta: %lf\n Multi: %lf\n Divisi%cn: %lf\n Factorial de a: %d\n Factorial de b: %d\n",
                   resuSuma,
                   resuResta, resuMulti, 162, resuDiv, resuFacA, resuFacB);
        }
    } while (menu != 5);

    return 0;
}
