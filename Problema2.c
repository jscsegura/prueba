#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {

	/*! \brief Brief description.
 *         Brief description continued.
 *
 *  Detailed description starts here.
 */

    // Declarar variables iniciales 
    	double A;//!< Primer término de la ecuación cuadrática
	double B;//!< Segundo término de la ecuación cuadrática
	double C;//!< Tercer término de la ecuación cuadrática
	double D; //!< Discriminante


	printf("Escriba el primer término de la ecuación cuadrática:\n ");
	scanf("%lf", &A);

	printf("Escriba el segundo término de la ecuación cuadrática:\n ");
	scanf("%lf", &B);

	printf("Escriba el tercer término de la ecuación cuadrática:\n ");
	scanf("%lf", &C);

	D= pow(B,2)-(4*A*C);
	printf("El discriminante es: %lf \n",D);

		if (D>=0){
	double x1= -B/(2*A)+sqrt(D)/2*A;
	double x2= -B/(2*A)-sqrt(D)/2*A;
	printf("La primer solución es x1= %lf \n", x1);
	printf("La primer solución es x2= %lf \n", x2);	
	}
		else{
	double  x1re= -B/(2*A);
	double  x2re= -B/(2*A);
	double _Complex x1im= sqrt(D)/2*A;
	double _Complex x2im= -sqrt(D)/2*A;
	printf("Las soluciones son complejas\n");
	printf("La primer solución es x1= %lf + %lfi \n", x1re, x1im);
	printf("La segunda solución es x2= %lf + %lfi \n", x2re, x2im);
	}

	
    return 0;
}
