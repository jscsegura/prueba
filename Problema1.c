#include <stdio.h>

int main() {

	/*! \brief Brief description.
 *         Brief description continued.
 *
 *  Detailed description starts here.
 */

    // Declara variable 'salir' y le asigna un valor inicial
    int salir = 1;

    // Itera mientras el valor de 'salir' sea distinto de cero
    while(salir != 0) {
        printf("Escriba '0' para salir: ");

        // Lee un entero y lo guarda en 'salir'
        scanf("%d", &salir);
    }

    return 0;
}
