//hechon por: Jesús Steven Medrano Carballo
//carnet: MC18055

#include<iostream> //la principal de entrada y salida
#include<cstdlib> //
#include<windows.h> //las librerias de windows

using namespace std;

int main ()

{float notas[5];
 float suma=0;
 float promedio;
 for (int i=0; i<=4; i++)
{
 do{

cout<<"ingrese la nota "<<i+1<<endl;
cin>>notas[i];
}while (notas[i]<0 || notas[i]>10);


suma=suma+notas[i]; //acumular la sumatoria de notas
promedio=suma/5;
}

//salida de tatos en pantalla
cout<<"las notas son: "<<endl;

for (int i=0; i<=4; i++)
{

cout<<"\n N"<<i+1<<": "<<notas[i]<<endl;
	
}

cout<<"\n El promedio es de: "<<promedio<<endl;

system ("pause");

return EXIT_SUCCESS;
}
