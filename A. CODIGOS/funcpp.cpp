
// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

#include <iostream>//libreria obligatoria de entrada y salida
#include <cstdlib>//libreria del programa
#include <windows.h>//libreria para adornos al programa


using namespace std;//evita que escribamos std en cada linea de codigo

float sumar(float &x, float &y);//funcion float con retorno x+y
void pedirnumeros();//funcion sin retorno utilizada para la operacion
   



float sumar(float &x, float &y)//declaracion de la funcion float

{
	cout<<&x<<endl;//imprime x
	cout<<&y<<endl;//imprime y
	
	return x+y;//retorna un valor x+y
}
	
	void pedirnumeros ()//funcion sin retorno pero con una operacion dentro
{
	float x;//variable flotante para almacenar un dato
	float y;//variable flotante para almacenar un dato
	float res;//variable para la respuesta
	
	cout<<"ingrese un numero:"<<endl;//solicitud de ingresar dato x
	cin>>x;//almacenamiento del dato x
	
	cout<<"ingrese un numero:"<<endl;//solicitud de ungresar dato y
	cin>>y;//almacenamiento del dato y
	
	cout<<&x<<endl;
	cout<<&y<<endl;
	
	res=sumar(x,y);//operacion de sumar para dar una respuesta
	
	cout<<"el resultado es:"<<res<<endl;//imprime el resultado en pantalla
}

int main()//funcion principal y cuerpo del programa
{
	system("color 4f");//color a fono y fuentes
   pedirnumeros();//todo lo anterior se reduce a una sola funcion
	  
	return 0;//retorno de valor 0
}
