#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {

	/*! \brief Solución de ecuación cuadrática
 *        
 *
 *  Este programa facilita al usuario la resolución de una ecuación cuadrática mediante el ingreso de los términos a b y c (de la forma ax^2 + bx +c = 0). El programa está diseñado para que se faciliten soluciones tanto reales como complejas. 
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
		double x1= -B/(2*A)+sqrt(D)/2*A; //!< Primer resultado
		double x2= -B/(2*A)-sqrt(D)/2*A; //!< Segundo resultado
		printf("La primer solución es x1= %lf \n", x1);
		printf("La primer solución es x2= %lf \n", x2);	
	}
	
	else{
		double  x1re= -B/(2*A);//!< Primer resultado (parte real)
		double  x2re= -B/(2*A);//!< Segundo resultado (parte real)
		double complex x1im= csqrt(D)/2*A;//!< Primer resultado (parte imaginaria)
		double complex x2im= -csqrt(D)/2*A;//!< Segundo resultado (parte imaginaria)
		printf("Las soluciones son complejas\n");
		printf("La primer solución es x1= %lf + %lfi \n", x1re, cimag(x1im));
		printf("La segunda solución es x2= %lf + %lfi \n", x2re, cimag(x2im));
	}

	
    return 0;
}
