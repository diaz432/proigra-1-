/* Carlos Adiel Diaz del Cid
Carnet: DD18003

Una empresa comercializadora contrata vendedores a los cuales les paga un salaria
que va de acuerdo al total de las ventas realizadas en el mes. 

realizar un programa en c++ que sistematice este procedimiento y al ingresar las 
ventas de un empleado inmediatamente muestre el sueldo que le corresponde.*/

//librerias para realizar el programa
#include <iostream>//libreria de entrada y salida
#include <math.h>//libreria de procesos matematicos
#include <iomanip>//libreria del programa

//se utiliza lo siguiente para evitar poner std en cada linea de codigo
using namespace std;

//definicion de variables para el codigo
int ventas;
float sueldo;
float a;

//cuerpo del programa de calculo de sueldo para empleados 
main()
{
//se agrega un do y un while para evitar los numeros menores a 0
	do{
		//se presenta al usuario el nombre de la empresa 
	cout<<"INDUSTRIAS LA CONSTANCIA"<<endl;
	cout<<" "<<endl;
	// se solicita al usuario que ingrese el total de ventas del usuario realizadas en un mes
	cout<<"Ingrese el total de ventas del vendedor."<<endl;
	//se guarda la variable para realizar los procesos nesesarios
	cin>>ventas;
}
//el while se agrega para repetir la peticion de ingreso
while(ventas<=0);

cout<<setprecision(4)<<endl;
cout<<fixed<<endl;
	
	// se calcula el sueldo con la condicion 1.
	if (ventas>0 && ventas<=500000)
	{
		sueldo=80.000;
	}
	// se calcula el sueldo con la condicion 2.
	else if (ventas>500001 && ventas<=1000000)
	{
		sueldo=160.000;
	}
	// se calcula el sueldo con la condicion 3.
	else if (ventas>1000001 && ventas<=1500000)
	{
		sueldo=320.000;
	}
	// se calcula el sueldo con la condicion 4.
	else if (ventas>1500001 && ventas<=2500000)
	{
		sueldo=450.000;
	}
	// se calcula el sueldo con la condicion 5.
	else if (ventas>2500001 && ventas<=4000000)
	{
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
	
	return 0;
}
// fin del programa de calculo de sueldo del vendedodr 
