// CARLOS ADIEL DIAZ DEL CID
// DD18003
// PROGRAMACION 1
// ING. LIGIA ASTRID HERNANDEZ

// Elementos necesarios para desarrollar el programa
// Libreria por defecto 
#include <iostream>
// Libreria de calculo matematico
#include <math.h>

//para no incluir std en cada linea
using namespace std;

   /* Variables a utilizar en el desarrollo del programa utilizando el formato float por posibles numeros decimales.
   cs: cantidad de sacos a comprar.
   pi: precio inicial de la compra $100 por saco.
   d: descuento que se le aplicara al precio inicial.
   pd: precio despues de aplicar el descuento adecuado ala compra.
   iva: impuesto, se calcula un impuesto del 13% del precio despues de aplicar eñl descuento.
   tt: precio final de  la compra ya aplicando el iva.
   */
  float cs, pi, d, pd, iva, tt;
  
  // Desarrollo del programa para ventas de cafe en sacos
  main () { 
  // texto que se le mostrara al comprador.
  cout<< "distribuidora de cafe en grano la montaña S.A de C.V" <<endl;
  cout<< "                 !bienvenido!                       " <<endl;
  cout<< " " <<endl;
  cout<< "SE LE INFORMA QUE A SU COMPRA SE LE APLICARA DESCUENTO DE ACUERDO A LOS ESTANDARES DE LA EMPRESA"<<endl;
  cout<< "ADEMAS SE LE APLICARAN LOS IMPUESTOS ESTANDARES MUNDIALES" <<endl;
  cout<< " " <<endl;
  cout<< " " <<endl;
  // se pide al comprador que ingrese la cantidad de sacos que desea comprar 
  cout<< "Por favor ingrese la cantidad de sacos de cafe que desa comprar" <<endl;
  // se guarda el dato en la variable cs
  cin>>cs;
  cout<< " " <<endl;
  cout<< " " <<endl;
  
  // se calcula el dinero a pagar equivalente al numero de sacos
  pi=cs*100;
  
  /* condiciones para aplicar descuento:
  num. sacos >=100: -10%
  num. sacos >=200 hasta 249: -15%
  num. sacos >=250 hasta 300: -20%
  num. sacos >300: -25%
  A todos estos descuentos se les aplicara el impuesto correspondiente
  */
  
  // condicion #1
 if(cs>=100 & cs<200){
  	
  	//calculo de descuento
  	d=pi*0.10;
  	pd=pi-d;
  	
  	//calculando total aplicando el iva
  	iva=pd*0.13;
  	tt=pd+iva;
  	
  // resultados de la compra
  cout<< "RESULTADOS DE SU COMPRA" <<endl;
  cout<< " " <<endl;
  cout<< "SUB. TOTAL: "<<pi<<endl;
  cout<< " " <<endl;
  cout<< "TOTAL: "<<tt<<endl;
  }
  
  // condicion #2
  else if(cs>=200 & cs<=249){
  	
  	//calculo de descuento
  	d=pi*0.15;
  	pd=pi-d;
  	
  	//calculando total aplicando el iva
  	iva=pi*0.13;
  	tt=pd+iva;
  	
  // resultados de la compra
  cout<< "RESULTADOS DE SU COMPRA" <<endl;
  cout<< " " <<endl;
  cout<< "SUB. TOTAL: $"<<pi<<endl;
  cout<< " " <<endl;
  cout<< "TOTAL: $"<<tt<<endl;
  }
  
  // condicion #3
  else if(cs>=250 & cs<=300){
  	
  	//calculo de descuento
  	d=pi*0.20;
  	pd=pi-d;
  	
  	// calculando total aplicando el iva
  	iva=pd*0.13;
  	tt=pd+iva;
  	
  	//resultados de la compra
  cout<< "RESULTADOS DE SU COMPRA" <<endl;
  cout<< " " <<endl;
  cout<< "SUB. TOTAL: $"<<pi<<endl;
  cout<< " " <<endl;
  cout<< "TOTAL: $"<<tt<<endl;
  }
  
// condicion #4
  else if(cs>300){
  	
  	//calculo de descuento
  	d=pi*0.25;
  	pd=pi-d;
  	
  	//calculando total aplicando el iva
  	iva=pd*0.13;
  	tt=pd+iva;
  	
   //resultados de la compra 
     // resultados de la compra
  cout<< "RESULTADOS DE SU COMPRA" <<endl;
  cout<< " " <<endl;
  cout<< "SUB. TOTAL: $"<<pi<<endl;
  cout<< " " <<endl;
  cout<< "TOTAL: $"<<tt<<endl;
  }
  
  //contraria de de la condicion #1
  else{
  
  iva=pi*0.13;
  
  tt=pi+iva;
  
  //resultados de la compra
  cout<<"Lamentamos informar que su compra no aplica para descuentos"<<endl;
  cout<<"se le aplicara el impuesto establesido por estandares mundiales"<<endl;
  cout<<" "<<endl;
  cout<< "RESULTADOS DE SU COMPRA" <<endl;
  cout<< " " <<endl;
  cout<< "SUB. TOTAL: $"<<pi<<endl;
  cout<< " " <<endl;
  cout<< "TOTAL: $"<<tt<<endl;
}
cout<< " " <<endl;
cout<< " " <<endl;
cout<< "GRACIAS POR SU COMPRA"<<endl;
cout<<"distribuidora de cafe en grano la montaña S.A de C.V"<<endl;
cout<<"LE DESEA UN FELIZ DIA"<<endl;

return 0;
  } 
