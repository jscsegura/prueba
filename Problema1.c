#include <stdio.h>

int main() {

	/*! \brief Brief description.
 *         Brief description continued.
 *
 *  Detailed description starts here.
 */

    // Declarar variables iniciales 
    	int A;//!< Primer sumando
	int B;//!< Segundo sumando
	int C;//!< Resultado

	printf("Escriba el primer sumando:\n ");
	scanf("%d", &A);

	printf("Escriba el segundo sumando:\n ");
	scanf("%d", &B);

	C=A+B;

printf("El resultado es: %d\n", C);
	
    return 0;
}
