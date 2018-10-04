// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

#include <iostream>//Libreria obligatoria de entrada y salida.
#include <conio.h> //Libreria para darle mejor presentacion a los programas.

using namespace std;//Se utiliza para evitarnos escribir std en cada linea de codigo

int main(){//Funcion principal del programa

	system("color 4f");//Es utilizado para dar color al fondo y a las funtes del programa
	
	int matriz[2][3]={{1,2,3},{4,5,6}};//Declaracion de una matris de 2*3 es decir (2 filas y 3 columnas).
	
	for(int i=0; i<2; i++){//se utiliza un for para dar denominacion a las filas
		
		for(int j=0; j<3; j++){//Da denominacion a las columnas del programa
			
			cout<<matriz[i][j]<<" ";//Imprime en pantalla la matriz antes creada
		}
		
		cout<<"\n";
	}
	
	return 0;//nos retorna 0 valor 
	getch();//funciona como una pausa antes de finalizar la ejecucion.
}
