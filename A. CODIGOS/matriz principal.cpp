// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

#include <iostream>//libreria de entrada y salida.

using namespace std;//Para no escribir std en cada linea de codigo.

int main(int argc, char** argv) {//Funcion principal y cuerpo del programa.

system("color 4f");//Da color a las fuente y al fondo del programa en ejecucion.

int mat[5][5];//declaracion de una matriz.

int mat2[5][5];//Declaracion de la matriz 2.

int mat3[5][5];//Declaracion de la matriz 3.

for(int fila=0; fila<5; fila++){//ciclo for para posiciones de la matriz al imprimir en pantalla.
	
	for(int col=0;col<5;col++){//ciclo for para posiciones de la matriz al imprimir en pantalla.
		
		mat[fila] [col]=0;//asigancion de la matriz principal.
		
		if(fila==4 || col==2){//If utilizado para la matriz como condicion.
			
			mat2[fila][col]=0;//asignacion de la matriz 2.
			
		}else{//esto es en caso de no cumplrse el if.
		
				mat2[fila][col]=1;//asignacion de la matriz 2 igualando a 1
		
	}
	
		mat3[fila][col]=mat[fila] [col]+mat2[fila][col];/*asignacion de la matriz 3 que es 
		                                                  la suma de la matriz principal y 
		                                                  la matriz 2.*/
	}
	
}

for(int fila=0;fila<5;fila++){//Declaracion para imprimir las filas,
	
	for(int col=0;col<5;col++){//Declaracion para imprimir las columnas.
		
		cout<<mat2[fila][col]<<"\t";//Imprime en pantalla la matriz.
	
	}

cout<<endl;//Es la imprecion de un salto de linea.
	
}

system("pause");//da una pausa al programa para no cerrar la ejecucion.

	return 0;//nos reotrna el valor de 0
}
