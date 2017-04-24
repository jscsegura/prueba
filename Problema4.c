#include <stdio.h>

int main() {

/*! \brief Bubble Sort.
 *         
 *
 *  Este programa permite que el usuario ingrese un tamaño del array que desea generar. El mismo llenará las N plazas con números aleatorios, que van del 0 al 500. Dicha lista se desplegará una vez se ha 
 */

 	int N;
	int i, loop,j,t;

	printf("Ingrese el tamaño del array deseado:\n");
	scanf("%d",&N);

	int array[N];
	srand(0);

	for (i=0; i<=N;i++){

		array[i]=rand()%501; //rand() % (max_number + 1 - minimum_number) + minimum_number

	}

	printf("El array generado es:\n");

	for(loop = 0; loop < N; loop++){
		printf("%d \n", array[loop]);

	}

	for (i = 0 ; i < ( N - 1 ); i++)
 	 {
    		for (j = 0 ; j < N - i - 1; j++)
    		{
     			 if (array[j] < array[j+1]) 
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
