// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

#include <iostream>//libreria obligatoria de entrada y salida 
#include <cstdlib>//libreria del programa 
#include <windows.h>//libreria para agregar sonido al programa

using namespace std;//nos evita escribir std en cada linea.
void l();//declaracion de la funcion, no retornara nada.
int main(int argc, char** argv) //funcion principal y cuerpo del programa.
{
	system("color 4f");
	
	int n=1;//variable entera
	int vn;//variable entera
	int suma=0;//variable entera
    int aux;//variable entera
	
	do{//ciclo que repite una condicion asta que se da su cumplimiento
		l();//Fuincuin sin retorno
	cout<<"cuantos numeros quiere sumar[2-4]"<<endl;//salida de texto
	cin>>vn;//entrada de dato
	
	}while (vn<2||vn>4);//condicon mientras
	while (n<=vn){//condicion mientras se cumpla el proceso
		l();//no retorna nada
		cout<<"ingrese el numero"<<n<<endl;//salida de texto en pantalla
		cin>>aux;//entrada de dato
		suma=suma+aux;//operacion matematica suma
		n++;
	}
	l();//funcion sin retorno
	
   cout<<"la suma es de:"<<suma<<endl;//salida d ela respuesta en pantalla
	system("pause");//pausa al programa hasta que se preciona una tecla

}
void l(){//declaracion de la funcion sin retorno 
	system ("cls");//limpia la pantalla despues de cada accion
}
