#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	/*int x[4][4];
	
	for (int i=0; i<=3; i++){
		for (int j=0; j<=3; j++){
			x[i][j] = 0;
		}

	}*/
	
	/*
	for (int i=0; i<=3; i++){
		
		x[0][1]=3;
		
		if (i=3){
			x[3][2]=3;
			x[3][3]=3;
		}
	}*/
	
	int g[4][4];
	for (int i=0; i<=3; i++){
		for (int j=3; j>=0; j--){
			g[i][j] = 0;
			if (i==j)
			{
				g[i][j] = 1;	
			}
			else
			{
				g[i][j] = 0;
			}
			cout <<g[i][j];
		}
		cout<<endl;
	}
	
	
	return 0;
}
