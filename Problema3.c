#include<stdio.h>
int main() {

	/*! \brief Sucesión de Fibonacci.
 *       
 *
 *  Este programa permite al usuario encontrar el número N de la serie de Fibonacci. El programa le pide al usuario ingresar este número, y a través de un código iterativo, se llega a la solución. 
 */

    // Declarar variables iniciales 
	int n; //!< Variable del término de la sucesión que se desea encontrar
	int A = 0 ;//!< Variable intermedia para la suma (número i)
	int B = 1; //!< Variable intermedia para la suma (número i+1)  
	int i; //!< Cuenta las sucesiones que han pasado
	int C; //!< Resultado final 
 
   	printf("Ingrese el término de la sucesión de Fibonacci que desea obtener\n");
   	scanf("%d",&n);

	if (n<=0){
	 	printf("Ingrese un numero positivo mayor que cero\n");
  	 	return 0;
	}
	else{

 		for ( i = 0 ; i < n ; i++ ){
      			if ( i <= 1 )
        		C = i;
		else{
         		C= A + B;
        		A = B;
         		B = i;
      		}
	}
}
   	printf("El término que busca es %d\n",C);
   	return 0;
}
