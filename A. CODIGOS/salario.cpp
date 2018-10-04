/* Carlos Adiel Diaz del Cid
Carnet: DD18003

Una empresa comercializadora contrata vendedores a los cuales les paga un salaria
que va de acuerdo al total de las ventas realizadas en el mes. 

realizar un programa en c++ que sistematice este procedimiento y al ingresar las 
ventas de un empleado inmediatamente muestre el sueldo que le corresponde.*/

//librerias para realizar el programa
#include <iostream>
//libreria de presicion numerica.
#include <iomanip>
//libreria utilizada para agregar sonidos al programa.
#include <windows.h>

//se utiliza lo siguiente para evitar poner std en cada linea de codigo
using namespace std;

//definicion de variables para el codigo
int ventas;
float sueldo;
float a;

//cuerpo del programa de calculo de sueldo para empleados 
 main()
{
	
//esta linea de codigo es para agregar color tanto al fondo como a las letras.
	system("color 2C");

//se agrega un do y un while para evitar los numeros menores a 0
	do{
		//se presenta al usuario el nombre de la empresa 
	cout<<"                     INDUSTRIAS LA CONSTANCIA"<<endl;
	cout<<"       "<<endl;
	// se solicita al usuario que ingrese el total de ventas del usuario realizadas en un mes
	cout<<"                Ingrese el total de ventas del vendedor."<<endl;
	//sonido que se reproducira al imprimir en pantalla los cout anteriores.
	cout<<"\a";
	//se guarda la variable para realizar los procesos nesesarios
	cin>>ventas;
	
	//se utiliza para informar si el dato ingresado es incorrecto
	while(cin.fail()){
		cin.clear();
		
		cin.ignore(1000,'\n');
		//peticion de volver a escribir el dato.
		
		cout << "        El dato ingresado es incorrecto, ingreselo otra vez."<<endl;
		//espacios en blanco para dar mas orden a lo impreso en pantalla
		cout<<"       "<<endl;
		cout<<"       "<<endl;
		cout<<"       "<<endl;
		cout<<"       "<<endl;
		
	}
	
}
//el while se agrega para repetir la peticion de ingreso
while(ventas<=0);

//estas lineas son para dar presicion en decimales a la respuesta
cout<<setprecision(3)<<endl;
cout<<fixed<<endl;
	
	// se calcula el sueldo con la condicion 1.
	if (ventas>0 && ventas<=500000)
	{
		//calculo del sueldo
		sueldo=80.000;
	}
	// se calcula el sueldo con la condicion 2.
	else if (ventas>500001 && ventas<=1000000)
	{
		//calculo del sueldo
		sueldo=160.000;
	}
	// se calcula el sueldo con la condicion 3.
	else if (ventas>1000001 && ventas<=1500000)
	{
		//calculo del sueldo.
		sueldo=320.000;
	}
	// se calcula el sueldo con la condicion 4.
	else if (ventas>1500001 && ventas<=2500000)
	{
		//calculo resultante del sueldo del vendedor
		sueldo=450.000;
	}
	// se calcula el sueldo con la condicion 5.
	else if (ventas>2500001 && ventas<=4000000)
	{
		//calculo del sueldo del vendedor
		sueldo=550.000;
    }
    // se calcula el sueldo con la condicion 6.    y
    else if (ventas>4000000)
    {
    	// se calcula el sueldo del vendedor multiplicando el total de ventas por 20% de las ventas y resulta el salario
    	a=ventas*0.20;
    	sueldo=a;
	} /* Esta seria la ultima concion de este codigo pero facilmente 
	     se le pueden agragar mas condiciones utilizando else if */
	
	// se imprime en pantalla el sueldo del vendedor 
	cout<<"el sueldo del vendedor es: $"<<sueldo<<endl;
	//Ingreso de un sonido a reproducirse al dar el resultado.
	cout<<"\a";

	
	return 0;
}
// fin del programa de calculo de sueldo del vendedodr 
