// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

#include <iostream>//libreria de entrada y salida
#include <conio.h>//libreria dar vistosidad al programa

using namespace std;//evita escribir std en cada linea

int main(){//cuerpo del programa
	
	char matriz[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};//declaracion de una matriz
	
	for(char i=0; i<4; i++){//asignacion de posiciones
		
		for(char j=0; j<5; j++){//asignacion de posiciones
			
			cout<<matriz[i][j]<<" ";//imprime la matriz en pantalla
		}
		
		cout<<"\n";
	}
	
	return 0;//retorna el valor 0
	getch();//pausa el programa al igual que system("pause")
}
