// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

#include <iostream>//Libreria obligatoria para entrada y salida de datos.
#include <conio.h>//Libreria para dar mas realse y vistosidad al programa.

using namespace std;//Nos evita escribir std en cada linea de codigo.

int main(){//funcion principal del programa donde se escribe el cuerpo del codigo.
	
	//Matriz desiganada con 4 filas y 5 columnas.
	int matriz[4][5]={{1,5,9,13,17},{2,6,10,14,28},{3,6,11,15,19},{4,8,12,16,20}};
	
	for(int i=0; i<4; i++){//For utilizado para desigar posiciones a las 4 filas.
		
		system("color 4f");//Sirve para dar color a fondo y fuentes en la ejecucion del programa.
		
		for(int j=0; j<5; j++){//For utilizado para desgnar posiciones a las 5 columnas.
			
			cout<<matriz[i][j]<<" ";/* Imprime en pantalla los numeros designados en la matriz 
			                           dando un espacio entre cada uno de ellos*/
		}
		
		cout<<"\n";//Imprime en pantalla lo designado en el primer for pero sin afectar la salida anterior
	}
	
	return 0;//Nos retorna el valor 0 al final de la ejecucion del programa.
	getch();//Da un apausa al programa para que no cierre la ejecucion sin antes presionar una tecla.
}
