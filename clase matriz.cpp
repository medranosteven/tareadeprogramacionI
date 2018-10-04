#include <iostream>
#include<stdlib.h>

using namespace std;

int main(int argc, char **argv) {
	
	int mat[5][5];//declaramos una matriz
	int mat2[5][5];
	int mat3[5][5];
	
	for (int fila=0;fila<5;fila++){//ciclo for tiene un contador, que va a parar a 5 y va incrementando en una unidad
    for (int col=0;col<5;col++){//ciclo anidado
    	mat[fila][col]=0;
    	if(fila==4 || col==2){
    		mat2[fila][col]=0;
    		mat2[fila][col]=0;
		}else{
				mat2[fila][col]=1;
		}
    
    	mat3[fila][col]=mat[fila][col]+mat2[fila][col];
	}
	}
	for (int fila=0;fila<5;fila++){
    for (int col=0;col<5;col++){
    	cout<<mat3[fila][col]<<"\t";
	}
	cout<<endl;
}
	system("pause");
	return 0;


}
