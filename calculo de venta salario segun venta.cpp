///Programa Hecho por:
///Jesús Steven Medrano Carballo
///Carnet:MC18055

///calcular el salario de un empleado en concepto de lo que ha vendido, con sus respectivos descuentos y sumarle el IVA

#include<iostream> //es la libreria oblogatoria de entrada y salida de cout
#include<cstdlib> //esta hace la gestion de memoria
#include<iomanip> //dar precision con el metodo fixed setprecission
#include<windows.h> //me permite usar la declaracion de todas las funciones de la biblioteca windows API

using namespace std; //se usa para los espacios de nombres

///iniciando programa

int main() //sirve como nuestro punto de partida para la ejecucion del programa
{
	system ("color 4A"); //lo usamos para cambiar el color de fuente y de fondo
	
	Beep (900,400); //nos sirve para dar pitidos en con una frecuencia determinada
	
	float venta; //me sirve para almacenar los datos de las ventas
	float sueldo; //es el pago que recibira el empleado
	
	do{ //esta hace un bucle hasta que el bloque de instrucciones sea falsa y finaliza de lo contrario se repite
	
	//ingresar los datos de la venta
	
	cout<<"Ingrese las venta:"<<endl; //declaramos una salida de pantalla que vera el usuario
	
	cin>>venta; //es el flujo de entrada de la variable venta
	
	//si la venta es cero se le volvera a pedir ingresar los datos
	
	}while(venta<0); //cuando venta es mayor que cero el while es igual a false
	
	if (venta <= 500000) //usamos las condiciones de if y else
	sueldo = 80.000;
	
	else if (venta <= 1000000)
	sueldo = 160.000;
	
	else if (venta <= 1500000)
	sueldo = 320.000;
	
	else if (venta <= 2500000)
	sueldo = 450.000;
	
	else if (venta <= 4000000)
	sueldo = 550.000;
	
	else
	sueldo = venta * 0.2; //declaramos que el sueldo es la venta por  el 20% de las ventas


	cout<<fixed<<setprecision(3)<<"el sueldo es de: $"<<sueldo<<endl; //usamos el metodo fixed setprecision
	
	//pitidos con rangos personalizados
	Beep (900,400); 
	Beep (800,300);
	Beep (700,200);
	Beep (600,100);
	
	cout<<"\a"; //sonido de alerta de windows
	
	system ("pause"); //se incorpora una pausa en el programa

cout<<"\n DESARROLLADO POR: JSMC"<<endl;
cout<<"UNIVERSIDAD DE EL SALVADOR"<<endl;
cout<<"	VERSION 2018"<<endl;
	
	return EXIT_SUCCESS; //declaramos una salida con exito de programa
}
