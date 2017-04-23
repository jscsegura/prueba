#include <stdio.h>


int main() {

	/*! \brief Brief description.
 *         Brief description continued.
 *
 *  Detailed description starts here.
 */

    // Declarar variables iniciales 
    	int N;//!< Primer sumando
	int A=0;//!< Segundo sumando
	int B=1;//!< Resultado

	printf("Escriba el número de término que desee averiguar:\n ");
	scanf("%lf", &N);


	if(N>0){
		if(N=1){
		printf("El número %d de la secuencia de Fibonacci es: %d\n", N,A);
		return 0;
	}
		else{
			if(N=2){
			printf("El número %d de la secuencia de Fibonacci es: %d\n", N,B);
			return 0;
		}
			else{
			 	for (int i=1,i<= N-2, i++){
				C= A+B;
				A=B;
				B=C;

				}	
			}	
		}
	}
}
	else{
	printf("No existe tal número. Este debe de ser un número positivo mayor que cero.\n ");

}
printf("El resultado es: %lf\n", C);
	
    return 0;
}
