// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

/* Programa para calcular la cantidad que se requiere de ingredientes para
   hacer un tipo de bebida.*/
   
   #include <iostream>//libreria por defecto del programa c++.
//conjunto de librerias que se utilizaron para el programa.
#include <iomanip>  
#include <windows.h>
#include <stdio.h>



using namespace std;
	void limpiar();//funcion sin retorno
	void loading();//funcion sin retorno
	void sinerror();//funcion sin retorno
	void caljugos(int a);//funcion sin retorno
	void calsodas(int a);//funcion sin retorno
	int main();//funcion oficial
	void pause();
		
	
//declaracion de la funcion void calsodas()
void calsodas(int a)
{
	 //variables para operaciones nesesarias
	int azucar; 
	int agua;
	
	//La variable azucar almacena el total en gramos 
	azucar = a * 800;
	//La variable agua almacena  el total en ml.
	agua = a * 500;
	
	//funcion que limpia la pantalla 
	limpiar();
	
	//Se imprime en pantalla el resultado
	cout << "Insumos requeridos para la produccion de sodas "<<"Azucar:"<<azucar<<"g----"<<" Agua:"<<agua<<"ml" << endl;
	cout<<"GRACIAS VUELVA PRONTO"<<endl;

	pause();//el resultado no se sierra mientras no se presione una tecla
	

	main();//regresa al usuario al menu
	
	
}	

void caljugos(int a)
//Funcion jugos() se utiliza para obtener los insumos de azucar
{
	//Declaracion de variable azucar se utilizara para la operacion de insumos de azucar 
	int azucar;
	//Declaracion de variable agua se utilizara para la operacion de insumos de agua 
	int agua;
	
	//La variable azucar almacena la operacion de para obtener la cantidad insumos de azucar 
	azucar = a * 700;
	//La variable agua almacena la operacion de para obtener la cantidad insumos de agua 
	agua = a * 600;
	
	//funcion que limpia la pantalla de los textos
	limpiar();
	
	//Se imprime el resultado
	cout << "Ingredientes necesarios para la produccion de jugos." << endl;

	cout<<"Los ingredientes requeridos son "<<"Agua : "<<"Azucar:"<<azucar<<"g----"<<" Agua:"<<agua<<"ml" << endl;
	
	cout<<"\n                                                  GRACIAS VUELVA PRONTO"<<endl;

	pause();//para que el resultado no se cierre mientras no se presione una tecla
	
	main();//funcion para que el usuario regrese al menu

	
}
	
//funcion para evitar que el codigo presente errores
void sinerror()
{
		//Ciclo while 
		while(cin.fail()){
		
		//Limpia limpia los datos ingresados
		cin.clear();
		
		//Ignora caracteres
		cin.ignore(1000,'\n');
		
		}
}	
	
	//funcion para brindar una interfaz de carga a una operacion del codigo realizado
	void loading(){
		cout << "Cargando resultados por favor espere..."<<endl;
	cout << "..."<<endl; 
	Sleep (1000);   
    cout << "..."<<endl;
    Sleep (1000);
    cout << "..."<<endl;  
    Sleep (1999);
	}

	//funcion que limpia la pantalla
	void limpiar(){
		system ("cls");
	}
	
//Cuerpo del programa
int main() 
{
	//añade color a las fuentes y al fondo del compilado
	system("color 7C");
	int jugos;
	int sodas;
	
	//funcion que limpia la pantalla
	limpiar();
	
	//Declaracion de la variable produccion 
	int produccion;
	//Declaracion de la variable opcion 
	int opcion;
	//Variable de contador
	int loading = 1;
	
	//ciclo do-while no permite ingresar y tabajar con numeros negativos ni el 0
	do {
		
		//funcion que limpia la pantalla 
		limpiar();
		
		//Se imprimen las opciones	
		cout << "Opciones" << endl;
		cout << "1.Produccion diaria de Jugos" << endl;
		cout << "2.Produccion diaria de Sodas" << endl;
		cout << "3.Salir" << endl;
		
		//Imprime texto para el programa
		cout << "Ingrese una opcion: ";
		
		//Se ingresa la opcion
		cin >> opcion;
		
		//Funcion que se utiliza para evitar errores 
		sinerror();
	
	} while(opcion <= 0);
	
	 
	cout << "                                              CARGANDO POR FAVOR ESPERE..." << endl;
	
	//ciclo while para la generacion de un tiempo de espera para evitar errores
	do {
		//se permite el reposo de la pantalla
		Sleep(1100);
	
		cout << "                             ---- ---- ";  
		
		//Variable carga 
		loading++;
	
	} while (loading < 3);
	
	//Sentencia para condiciones en el menu
	switch(opcion)
	{
		//se evalua el caso 1
		case 1:
			
			//ciclo do-while para evitar numeros negativos 
			do {
				//funcion que limpia la pantalla 
				limpiar();
				
				//Imprime texto
				cout << "Ingrese la produccion de jugos: ";
				
				//Se ingresa la produccion
				cin >> produccion;
		
			} while(produccion <= 0);
		
			//El caracter'\a' nos permite generar un sonido de campanilla
			cout << '\a';
			
			///Se utiliza la funcion caljugos()
			caljugos(produccion);
			
			//Para evitar que se sierre la pantalla se utiliza lo siguiente
			system("PAUSE");
			
			//salto de condiciones
			break;
		
		//se evalua el caso 2
		case 2:	
			
			//se evitan numeros negativos y 0 con eto
			do {
				//funcion que limpia la pantalla de los textos
				limpiar();
				
				//Imprime txeto
				cout << "Ingrese la produccion de sodas: ";
				
				//Se ingresa la produccion
				cin >> produccion;
				
				//Funcion que se utiliza para evitar errores de datos
				sinerror();
			
			} while(produccion <= 0);
			
			//se utiliza mendiante la libreria windows
			cout << '\a';
			
			//declaracion del total de ingredientes
			calsodas(produccion);
			
		
			
			//salto de condiciones	
			break;
		
		//Si se ingresa la opcion 3 se ingresara aqui
		default:
			//se limpia la interfaz		
			limpiar();
			
			//Se imprime 
			cout << "                                                   GRACIAS POR PREFERIRNOS" << endl;
			
				
			
			//salto de condiciones y cierre 
			break;			
			
	}
	
}

   
void pause(){
	system ("pause");
} 
  
