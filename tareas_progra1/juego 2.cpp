// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

/* Tarea sobre un juego de "x" y "0" utilizando matrices, funciones y otras de las actividades
   realizadas en clase y en practicas de la materia de programacion 1*/

#include <iostream> //Libreria para entradas y salidas.
#include <stdio.h>  //Libreria de cabesera para realizar operaciones.
#include <stdlib.h> //Libreria de contencion de propocitos de funciones.

using namespace std;//Ayade un std invisible a cada linea de codigo para evitarnos escribirla nosotros.

char tabla[3][3];//Matriz para reservar espacios para ser utilizados mas adelante.
char jugador='x';//Variable utilizada para el juego.

void comenzar();//Funcion que no retorna valor solo realiza los prosedimiento indicados dentro de ella.
bool gano();    //Funcion para declarar un ganador al juego.
void desplegar();//Esta funcion nos desplega el tablero de juego en el cual se colocaran las "x" y los "0"
bool empate();//Funcion para declar un empate entre los dos oponentes.

int main() {//Funcion principal y cuerpo del programa realizado.
	
	system("color 4f");//Añade color al fondo y a las fuentes en el programa ya compilado y ejecutandose.
	
	//Serie de salidas que se muestran al jugador para dar a conocer el juego que se jugara.
	cout<<"            BIENVENIDO  "<<endl;
	cout<<"  Este es el juego tradicional de X y 0"<<endl;
	cout<<" "<<endl;
	cout<<"las filas estan designadas desde 0 hasta 2"<<endl;
	cout<<"                     y                    "<<endl;
	cout<<"las columnas estan designadas desde 0 hasta 2"<<endl;
	
	//El cuerpo de la funcion comenzar es el que nos permite comenzar una partida en dicho juego.
	comenzar();
	while (!gano() && !gano()){
		desplegar();
		int fila=0;//Se declara esta variable para asignarle una posicion en el juego en el formato fila.
		int columna=0;//Se declara esta variable para asignar una posicion en el juego en el formato de columna.
		cout<<endl<<"\tEn que fila desa jugar "<<jugador<<":";
		cin>>fila;
		cout<<"\tEn que columna desa jugar "<<jugador<<":";
		cin>>columna;
		
		// Se utiliza un if para dar una concion al juego.
		if(tabla[fila][columna] !='_'){//en la tabla o tablero se denominan dos tipos de variables filas y columncas.
			cout<<"Esa casilla ya esta ocupada, intente de nuevo\n";
		}// El else es para generar una accion en caso de no cumplirse con el if.
		else{
			tabla[fila][columna]=jugador;
			if(jugador=='x'){
				jugador='o';
			}
			else{
				jugador = 'x';
			}
		}
	}//se imprime el siguiente formato solo dentro del compilador no en pantalla
	cout<<"\n";
	desplegar();
	cout<<"\n";
	system("pause");//se agrega una pausa al juegop que continua solo presionando enter.
}

//Con esta funcion se donomita el recorrido de la matriz.
void comenzar(){
	for(int i=0; i<3;i++){
		for(int j=0; j<3; j++){
			tabla[i][j]='_';
		}
	}
}
//Esta funcion nos permite desplegar el tablero de juego en el cual se iran colocando las "x" y los "0" segun decicion de los jugadores
void desplegar(){
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"\t"<<tabla[i][j];
		}
		cout<<"\n";
	}
}
//Funcion de ganador esta funcion nos imprime en pantalla si "x" ó "0" es el ganador de la partida.
bool gano(){
	
	//Declaracion de encontrado una ganador para ser impreso en pantalla acompañado de dos if para realizar condiones para dar un ganador.
	char encontrado=tabla[0][0];
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(tabla[i][j]=='_'){
				break; break;
			}
			if(encontrado != tabla[i][j]){
				break; break;
			}
			encontrado=tabla[i][j];
			if(j==2){
				cout<<"\tHa ganado:"<<encontrado;
				return true;
			}
		}
    }


//Se realizan varios casos de la siguiente manera para designar un ganador dependiendo de las posiciones jugadas.
encontrado=tabla[0][0];
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		if(tabla[j][i]=='_'){
			break; break;
		}
		if(encontrado!=tabla[j][i]){
		break; break;
	}
	encontrado=tabla[j][i];
	if(j==2){
		cout<<"\tHa ganado:"<<encontrado;
		return true;
}
	}
	
}

//repeticon de caso para ganador
encontrado=tabla[0][0];
for(int i=0; i<3; i++){
	if(tabla[i][i]=='_'){
		break;
	}
	if(encontrado != tabla[i][i]){
		break;
	}
	encontrado=tabla[i][i];
	if(i==2){
		cout<<"\tHa ganado:"<<encontrado;
		return true;
	}
	
}

//Segunda repeticion del caso de ganador
encontrado=tabla[0][2];
for(int i=2; i>=0; i--){
	if(tabla[2-i][i]=='_'){
		break;
	}
	if(encontrado !=tabla[2-i][i]){
		break;
	}
	encontrado=tabla[2-i][i];
	if(i==0){
		cout<<"\tHa ganado:"<<encontrado;
		return true;
	}
	
}
return false;
}
/*Funcion para declarar un empate entre los dos jugadores esto se da cuando ninguno de los dos logra
  conectar tres veces consecutivas su ficha de juego en este caso "x" ó "0"*/ 
bool empate(){
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(tabla[i][j]=='_'){
				return false;
			}
		}
	}
    cout<<"\tHay un empate \n";
    return true;
}
