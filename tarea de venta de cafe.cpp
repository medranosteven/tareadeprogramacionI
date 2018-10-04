//Programa hecho por: Jesús Steven Medrano Carballo
//carnet:MC18055

#include <iostream>
#include <stdio.h>

//en este programa vamos a realizar descuentos de productos de una empresa
//segun la cantidad que el cliente compre y el descueto que lleva y el iva del producto

using namespace std;

main () {
	int a,b;
	float c,d,descuento,iva,r,e;
	
	//saludo de bienvenida y la pregunta al cliente de cuantos sacos desea comprar
	
	cout<<"Bienvenido a Expo Cafe"<<endl;
	
	cout<<"¿cuantos sacos desea comprar?"<<endl<<endl;
	
	//iniciamos el programa y pedimos que introduzca la cantidad a comprar
	
	cout<<"Introduzca la cantidad de sacos a comprar: "<<endl;
	cin>>a;
	
	//declaramos el precio por saco
	
	b = a * 100;
	cout<<b<<endl;
	
	//aplicar descuentos siguiendo las condiciones
	
		if (a>100) {
			d = (b * 0.13);
			cout<<d<<endl;
			r = (b + a);
			cout<<r<<endl;
			c = r * 0.10;
			cout<<c<<endl;
			e = r - c;
			
			cout<<"El precio total por sacos es de: $ "<<e<<endl;
	}
	else {
		cout<<"No aplica descuento"<<endl;
			}
	
	if (b<200) {
		d = b * 0.13;
		r = (b + d);
		c = b * 0.15;
		e = r - c;
		cout<<"El precio total por sacos es de: $ "<<e<<endl;
	}
	
	else if (b>250 & b<300) {
		d = b * 0.13;
		r = (b + d);
		c = b * 0.20;
		e = r - c;
		cout<<"El precio total por sacos es de: $ "<<e<<endl;
		
	}
	
	else if (b>=300) {
		d = b * 0.13;
		r = (b + d);
		c = b * 0.25;
		e = r - c;
		cout<<"El precio total por sacos es de: $ "<<e<<endl<<endl;
		
	}
	
	cout<<"Gracias por su compra"<<endl;
	return 0;
}
