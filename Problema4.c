#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {

/*! \brief Brief description.
 *         Brief description continued.
 *
 *  Detailed description starts here.
 */

 	int N;
	int i, loop,j,t;

	printf("Ingrese el tamaño del array deseado:\n");
	scanf("%d",&N);

	int array[N];
	srand(0);

	for (i=0; i<=N;i++){

		array[i]=rand()%501;

	}

	printf("El array generado es:\n");

	for(loop = 0; loop < N; loop++){
		printf("%d \n", array[loop]);

	}

	for (i = 0 ; i < ( N - 1 ); i++)
 	 {
    		for (j = 0 ; j < N - i - 1; j++)
    		{
     			 if (array[j] < array[j+1]) /* For decreasing order use < */
     			 {
       				t       = array[j];
        			array[j]   = array[j+1];
        			array[j+1] = t;
     			 }
   		 }
  	}

	printf("El array ordenado descendientemente es:\n");

	for(loop = 0; loop < N; loop++){
		printf("%d \n", array[loop]);

	}


	
    return 0;
}
