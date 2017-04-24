#include <stdio.h>

int main() {

	/*! \brief Suma de dos números 
 *         
 *
 *  Este programa da la posibilidad al usuario de sumar dos números cualesquiera, inclusive si estos presentan decimales. 
 */

    // Declarar variables iniciales 
    	double A;//!< Primer sumando
	double B;//!< Segundo sumando
	double C;//!< Resultado

	printf("Escriba el primer sumando:\n ");
	scanf("%lf", &A);

	printf("Escriba el segundo sumando:\n ");
	scanf("%lf", &B);

	C=A+B;

printf("El resultado es: %lf\n", C);
	
    return 0;
}
