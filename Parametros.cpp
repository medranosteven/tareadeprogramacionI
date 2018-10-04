#include <iostream>
#include <cstdlib>

using namespace std;
//hacemos una funcion que sume
float sumar (float &x, float &y)/*hicimos primero paso por VALOR de x e y a esta funcion 
(SII se hacen copias de los valores de la memoria) y es el que mas se utiliza.. */
/*El paso de datos por REFERENCIA NOO se hacen copias, para hacer esto 
solo anteponemos un "&" a la variable*/
{
	cout <<&x<<endl;//posicion de memoria en x
	cout <<&y<<endl;//posicion de memoria en y
	return x+y;
}

//hacemos una funcion que no retorne nada para pedir un numero
void pedirNumero(){
	float x; 
	float y;		//inicializacion de variables
	float res;
	
	cout <<"Ingrese un numero: "<<endl;
	cin >>x;//guardamos en x				//Pedimos datos al usuario
	cout <<"Ingrese un numero: "<<endl;
	cin >>y;//guardamos en y
	
	cout <<&x<<endl;//posicion en memoria de x
	cout <<&y<<endl;//posicion en memoria de y
	
	res = sumar(x, y);//para el paso por referencia solo tomamos los 
	//valores en memoria de esta variable
	
	cout <<"El resultado es: "<<res<<endl;//imprimimos el resultado
}

int main() 
{
	pedirNumero();//llamamos la funcion
	
	system ("pause");
	
	return 0;
}
