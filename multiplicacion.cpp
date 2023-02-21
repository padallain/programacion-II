#include <stdio.h>
#include <stdlib.h>

int pedirDatos(int n1, int n2);
void llenarmatriz1 ();
void llenarmatriz2 ();
void operaciones();
void mostrar ();

int x=0,y=0, x1=0 ,y1=0, lol;
int array1[10][10], array2[10][10], matriz [10][10];
int main (){
	
	pedirDatos(x,y);
	llenarmatriz1();
	llenarmatriz2();
	operaciones ();
	mostrar();
	printf("\n\n EL PROGRAMA HA TERMINADO VULVA PRONTO =)\n\n");
	
	
	
	
	return 0;
	
}

int pedirDatos(int n1, int n2){
	
	printf("Ingrese el numero filas de la primera matriz: ");
	scanf ("%d", &x);
	
	printf ("Introduce el numero de columnas de la primera matriz: ");
	scanf("%d", &y);
	
	
	do{ 

	//Filas de matriz 2
	printf("Ingrese el numero de filas de la segunda matriz: ");
	scanf("%d", &x1);
	//Columnas de matriz 2
	printf("Ingrese el numero de columnas de la segunda matriz: ");
	scanf("%d", &y1);

	if( x1 != y){ 
		printf("\n\nLAS MATRICES DEBEN TENER LAS MISMAS DIMENSIONES\n");
		printf("\nDimensiones de la matriz_1 [%d-%d]\n\n",x,y);
	}
	
}while( x1 != y);
}

void llenarmatriz1 (){
	
	
	for (int i= 0; i<x; i++){
		for (int j= 0; j<y; j++){
			printf("Introduce el valor de la posicion [%d]-[%d] de la primera matriz: ",i+1,j+1);
			scanf("%d", &array1[i][j]);
			
		}
	}
	printf("/n");
}
	
void llenarmatriz2 (){
	
	for (int i= 0; i<x1; i++){
		for (int j= 0; j<y1; j++){
			printf("Introduce el valor de la posicion [%d]-[%d] de la segunda matriz: ",i+1,j+1);
			scanf("%d", &array2[i][j]);
			
		}
	}
	
}

void operaciones(){

	 int i, j, k;
	 //limpiar o inicializar matriz C
 	for(i=0; i< x; i++){
		for(k=0; k <y1; k++){
			matriz[i][k]=0;
		}
		}
   
 	for (i=0; i <x; i++){
 	 	for (j=0; j <y; j++){
   			for (k=0; k< y1; k++){
   				matriz[i][k] = matriz[i][k] + array1[i][j]*array2[j][k];
}
}
}
}

void mostrar (){
	
			printf("\nMatriz 1:\n");
			for(int i=0; i<x; i++){ //Mostrando la matriz 1 en pantalla
				for(int j=0; j<y; j++){
					printf("[%d] ", array1[i][j]);
			
		}
			printf("\n");
		}

			printf("\nMatriz 2:\n");

			for(int i=0; i<x1; i++){ //Mostrando la matriz 2 en pantalla
				for( int j=0; j<y1; j++){
					printf("[%d] ", array2[i][j]);
			
		}
		printf("\n");
		}
		
		
	
	
	printf("\nMatriz con la operacion requerida:\n");
		for(int i=0; i<x; i++){ //Mostrando la matriz producto de las sumas
			for( int j=0; j<y; j++){
			printf("[%d] ", matriz[i][j]);
		}
		printf("\n");
	}
}

	

		


