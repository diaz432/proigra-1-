// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

#include <iostream>//libreria de entrada y salida

using namespace std;//evita la escritura de std en cada linea de codigo
int main(int argc, char** argv) {//Funcion principal y cuerpo del programa
	
	int x[4][4];//declaracion de matriz
	for(int i=0;i<=3;i++)//asigancion de filas
	{
		for(int j=0;j<=3;j++)//asignacion de columnas
		{
			x[i][j]=0;//matriz
		}
		
	x[0][1]=3;//posicion en la matriz
	
	if (i=3)//condicion a cumplir
	{
		x[3][2]=3;
		x[3][3]=3;
	}
	
    }
	cout<<x[0][1]<<endl;//imprime la posicion fila y columna
	system ("pause");//pausa al programa

	return 0;//retorno de valor 0
}
