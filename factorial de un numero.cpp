//hecho por Jesus steven medrano
//carnet: MC18055

#include<iostream>
#include<cstdlib>
#include<windows.h>

using namespace std;

int main()
{
	int num;
	int fact=1;
	
	cout<<"ingrese un numero: "<<endl;
	cin>>num;
	
	for(int i=1; i<=num; i++)
	{
		fact=fact*i;	
		
	}
	cout<<"el resultado es: "<<fact<<endl;
	
	system ("pause");
	
	return EXIT_SUCCESS;
	
}
