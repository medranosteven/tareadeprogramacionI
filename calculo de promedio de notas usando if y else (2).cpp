//Programa Hecho por: Jesús Steven Medrano Carballo
//carnet: MC18055

//Calcular promedio de notas

#include<iostream>
#include <cstdlib>

using namespace std;

//pedir tres cantidades, obtener el promedio y decidir si aprueba o no

int main()
{
	float a,b,c,p;
	
	//decirle al usuario que ingrese la primera calificacion
	
	cout<<"Dame tu primer calificacion"<<endl;
	
	cin>>a;
	
		//decirle al usuario que ingrese la sgunda calificacion
	
	cout<<"Dame tu segunda calificacion"<<endl;
	
	cin>>b;
	
		//decirle al usuario que ingrese la tercera calificacion
	
	cout<<"Dame tu tercera calificacion"<<endl;
	
	cin>>c;
	
	p = (a + b + c) / 3;
	
	cout<<"Tu promedio es de: "<<p<<endl;
	
	if(p >= 6)
	{
	cout<<"Aprobaste la materia"<<endl;
}
	else
	{
	cout<<"Reprobaste la materia"<<endl;
}
	
	return 0;
}
