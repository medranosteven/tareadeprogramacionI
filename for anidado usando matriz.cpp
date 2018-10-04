//usando matriz con for anidado

#include<iostream>
#include<conio.h>

using namespace std;

int main()

{

int matriz[30][30];
int fil;
int col;
int matrizB[30][30];
cout<<"ingrese el numero de filas"; cin>>fil;
cout<<"ingrese el numero de columnas"; cin>>col;


for (int i = 0; i<fil; i++)
{
	for (int j = 0; j<col; j++)
	{
		cout<<"ingrese dato["<<i<<"]["<<j<<"]: "; cin>>matriz[i][j];	
	}
}
for (int i = 0; i<fil; i++)
{
for	(int j = 0; j<col; j++)
{
	cout<<matriz[i][j]<<" ";
}
	cout<<endl;	
}
//pasar datos de matriz a matrizB
for (int i = 0; i<fil; i++)
{
for	(int j = 0; j<col; j++)
{
	matrizB[i][j]=matriz[i][j];
   }	
}
cout<<"\nmatriz B\n";
for (int i = 0; i<fil; i++)
{
for	(int j = 0; j<col; j++)
{
	cout<<matrizB[i][j]<<" ";
   }	
   cout<<"\n";
}
return 0;
getch ();
}
