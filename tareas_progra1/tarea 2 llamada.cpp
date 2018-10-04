// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

/* Programa para calcular el costo de una llamada realizada 
   con cobros pór minuto hablado por el usuario */
   
   
   #include <iostream> //libreria para la uticaion de entradas y salidas (cout,cin)
#include <iomanip>  //libreria utilazada en el programa
#include <windows.h>//libreria para contener funciones del sistema
#include <stdio.h>//libreria para contencion de prototipos de funciones


using namespace std;
	void limpiar(); //funcion sin retorno 
	float caltiempo();//funcion con retorno de tipo flotanta
	void loading();//funcion sin retorno
	float costo();//funcion con retorno de tipo flotante
	
	
	//declaracion de la funcion sin retorno void loading()
	void loading(){
		//cuerpo de la funcion con sus salidas y entradas.
		cout << "Cargando resultados por favor espere..."<<endl;
	cout << "..."<<endl; 
	Sleep (1099);   
    cout << "..."<<endl;
    Sleep (1099);
    cout << "..."<<endl;  
    Sleep (2000);
	}
	
	//declaracion de la funcion sinretorno void limpiar()
	void limpiar(){
		//esto se utiliza para limpiar la pantalla despues de ingresar un valor y presionar enter
		system ("cls");
	}
	
	//declaracion de la funcion float caltiempo(), la cual calcula el tiempo de la llamada
	float caltiempo(){ 
    system("color 3E");
    
    
    //variable para tiempo de duracion de la llamada y nos permite ingresar solo valores positivos
    int tiem;
    float call;
    //se utiliza un do y un while para la validacion del numero de minutos ingresado por el usuario
    do{
    // se imprime en pantalla los siguente cout.
  	  cout << "GRACIAS POR USAR MI TIGO APP"<<endl;
  	  cout << "Por Favor espere..."<<endl;
   	 Sleep (2000);
		cout << "Ingrese numero de minutos hablados durante su llamada: ";
    
   //se guarda la variable tiem para realizar las operaciones para obtener el costo de la llamada.
     cin >> tiem;
     limpiar();
     
     //se nos regresa un mensaje solicitando nuevamente la cantidad en caso de no ser valida
     while(cin.fail()){
        
        cin.clear();
        
        cin.ignore(1000,'\n');//utilizamos esto para evitar errores en el programa
        
        cout << "El dato ingresado es invalido" << endl;
        
        cout << "Ingrese numero de minutos hablados durante su llamada ";
        
        cin.get();
        limpiar();
    }
    
    }while(tiem <=0);
    
////se declaran las condiciones para realizar las operaciones nesesarian en el programa    
    if(tiem > 1 && tiem<=10){
    loading ();
    
    call=tiem*0.05;
    
    cout << "Su factura a pagar es de: $"<<fixed<<setprecision(2)<<call<<" Dolares"<<endl;
    cout << '\a';
    
    
    cin.get();
    }
    
    //en caso de no cumplirse la primera condicon se realiza esta
    else if(tiem > 10 && tiem <= 15){
    loading();
    
    call=tiem*0.08;
   
    cout << "Su factura a pagar es de: $"<<fixed<<setprecision(2)<<call<<" Dolares"<<endl;
   
    cout << '\a';
    
    
    cin.get();
    }
    
   
    //al ser fallida la segunda condicion realizar un else
    else {
    
    tiem >15;
	
	cout << "Cargando resultados por favor espere..."<<endl;
	cout << "..."<<endl; 
	Sleep (1999);
    call=tiem*0.10;
    cout << "Su factura a pagar es de: $"<<fixed<<setprecision(2)<<call<<" Dolares"<<endl;
    cout << '\a';
   
    cin.get();
    }
    
    cin.get();
    return 0;
}
 //cuerpo oficial del programa bajo la funcion int main().
 int main(){
 	system("color 7c");
	 
 	cout<<"                     ¡BIENVENIDO¡"<<endl;
 	cout<<"                      MITIGO APP"<<endl;
 	
 	system("pause");
 	limpiar();
 	
 	caltiempo();
 	
 	
 
 	
 	
 
 	
 }
