//Programa hecho por: Jesús Steven Medrano Carballo
//carnet: MC18055

//una empresa de telefonia necesita calcular el total a pagar por cada cliente segun la siguiente tabla:
//1-10 min $0.05, de 11-15 min $0.08 y mas de 15 min $0.10
//hacer un programa que calcule el total a pagar por los minutos gastados

#include<iostream> // se utiliza para las entradas y salidas de las operaciones
#include<cstdlib> // se utiliza para realizar subprocesos
#include<windows.h> // nos permite acceder a las funciones de windows

using namespace std;

int main ()

 {
 float min;
 float t_pagar;
 
 do{ //esta hace un bucle hasta que el bloque de instrucciones sea falsa y finaliza de lo contrario se repite
	
	//ingresar el total de llamada realizada
	
	cout<<"Ingrese los minutos de la duracion de su llamada: "<<endl; //declaramos una salida de pantalla que vera el usuario
	
	cin>>min; //es el flujo de entrada de la variable min
	
	//si la llamada es cero se le volvera a pedir ingresar min
	
	}while(min<=0); //repetira el while hasta que sea falso
	
	if (min <= 10) //usamos las condiciones de if y else
	t_pagar = 0.05;
	
	else if (min <= 15)
	t_pagar = 0.08;
	
	else if (min >15)
	t_pagar = 0.10;
	
	else
	t_pagar = min; //declaramos que el total a pagar es los min gastados en llamada

	//salida de datos en pantalla

cout<<"\n el total a pagar por su llamada es: $"<<t_pagar<<endl;

cout<<"-------------------------------"<<endl;
		cout<<"==< EMPRESA TELEFONICA >=="<<endl;
cout<<"-------------------------------"<<endl;

system ("pause"); //hace una pausa

cout<<"\a";
cout<<"DESARROLLADO POR: JSMC"<<endl;
cout<<"UNIVERSIDAD DE EL SALVADOR"<<endl;
cout<<"	VERSION 2018"<<endl;
	
	return EXIT_SUCCESS; //retorno con exito
}
