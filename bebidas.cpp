//hecho por: Jesús Steven Medrano Carballo
//Carnet: MC18055

//hacer un programa en el que se calcule el total de insumos a gastar ya sea para soda o jugo

#include <iostream> // se utiliza para las entradas y salidas de las operaciones
#include <windows.h> // nos permite acceder a las funciones de windows

using namespace std;

int main() {
		
	int bebidas;
	int sodas = 1;
	int jugos = 2;
	int cantidad;
	float agua;
	float azucar;
	
	do //esta hace un bucle hasta que el bloque de instrucciones sea falsa y finaliza de lo contrario se repite
	{
		cout<<"Seleccione el tipo de bebida a producir"<<endl; //declaramos una salida de pantalla que vera el usuario
		cout<<"digite el numero de una de las dos opciones:"<<endl;//declaramos una salida de pantalla que le pedira al usuario realizar una acccion
		cout<<"1. sodas"<<endl; //declaramos las opciones que tendra el usuario que elegir
		cout<< "2. jugos"<<endl;//declaramos las opciones que tendra el usuario que elegir
		cin>>bebidas; //es el flujo de entrada de la variable bebidas
		
	}while (bebidas <1 || bebidas >2); //repetira el while las funciones asignadas
	if ( bebidas == 1) { //usamos las condiciones de if y else if
		cout<< "ingrese la cantidad de sodas a producir este dia:"<<"\n";
		cin>>cantidad;
		agua = cantidad * 500; //le asignamos el valor que tendra el agua para las sodas
		azucar = cantidad * 800; //le asignamos el valor que tendra el azucar para las sodas
		cout<<"la cantidad de sodas a producir este dia es:"<<cantidad<<"\n"; //imprimimos la cantidad a producir de sodas
	}
	else if ( bebidas == 2) {
		cout << "ingrese la cantidad de jugos a producir este dia:"<<"\n"; 
		cin>>cantidad;
		agua = cantidad * 600; //le asignamos el valor que tendra el agua para los jugos
		azucar = cantidad * 700; //le asignamos el valor que tendra el azucar para los jugos
		cout<<"la cantidad de jugos a producir este dia es:"<<cantidad<<"\n"; //imprimimos la cantidad a producir de jugos
	}
	
	cout<<"la cantidad de agua es:"<<agua<<" ml."<<"\n"; //damos a conocer la cantidad de agua en ml requerida para produccion de bebida
	cout<<"la cantidad de azucar es:"<<azucar<<" g."<<"\n"; //damos a conocer la cantidad de azucar en g requerida para produccion de bebida
	
	cout<<"-------------------------------"<<endl;
		cout<<"==< EMPRESA DE BEBIDAS >=="<<endl;
cout<<"-------------------------------"<<endl;

system ("pause"); //hace una pausa

cout<<"\a";
cout<<"\n DESARROLLADO POR: JSMC"<<endl;
cout<<"UNIVERSIDAD DE EL SALVADOR"<<endl;
cout<<"	VERSION 2018"<<endl;
	
	return 0; //no retornar ningun valor
}
