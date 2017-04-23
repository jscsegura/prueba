#include<stdio.h>
int main() {

	/*! \brief Brief description.
 *         Brief description continued.
 *
 *  Detailed description starts here.
 */

    // Declarar variables iniciales 
	int n;
	int A = 0 ;
	int B = 1; 
	int i;
	int C;
 
   printf("Ingrese el término de la sucesión de Fibonacci que desea obtener\n");
   scanf("%d",&n);

if (n<=0){
	 printf("Ingrese un numero positivo mayor que cero\n");
  	 return 0;
}
else{

   for ( i = 0 ; i < n ; i++ )
   {
      if ( i <= 1 )
         C = i;
      else
      {
         C= A + B;
         A = B;
         B = i;
      }
   }
}
   printf("El término que busca es %d\n",C);
   return 0;
}
