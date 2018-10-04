// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

				//librerias obligatorias utilizadas
#include <iostream> //utilizado para operaciones de entrada/salida.
#include <math.h>	//utilizado para procesos matematicos.
#include <windows.h> //utilizado para declarar las funciones de la biblioteca windows API.

			
using namespace std;//nos evita escribir std en cada linea de nuestro codigo

int main (int argc, char *argv[])//Funcion principal y cuerpo del programa
{

int x;//variable entera x

int fact=1;//declaracion de la variable para el factorial de un numero
  
do{//condicon a repetirse hasta que se cumpla

cout<<"Escriba el numero que quiere sacar el factorial: "<<endl;//solicitud de un numero
cin>>x;//almacenamiento del numero

}while (x < 0);//mientras no se cumpla la condicion seguir repitiendo el proceso

for (int i=1;i<=x;i++)//asignacion del factor
{
	
	fact=fact*i;//operacion para factorizar
	
}

cout <<"El resultado es: "<<fact<<endl;//Imprime en pantalla el factorial de un numero

system("pause");//pausa el programa hasta que se preciona una tecla
return EXIT_SUCCESS;

}

