//hecho por: Jesús Steven Medrano Carballo
//carnet: MC18055

//juego de X 0

#include <iostream> // se usa la libreria estandar para operaciones de entrada y salida
#include <stdio.h>// se usa para las declaraciones de funciones de la biblioteca
#include <stdlib.h>// se usa para ejecutar subprocesos
#include <time.h>// se usa para la hora y fecha y es para almacenar valores de tiempo del sistema

using namespace std;
int c[9]={0,0,0,0,0,0,0,0,0}, turno, jugador;
char denuevo=' ';

char tirada(int i); /*Necesaria en COUT, retorna 'X', 'O' o ' '*/
int ganador(); /*Deduce si hay un ganador, regresa -1, 0 o 1*/
void print_XO(); /*Imprime el tablero de X 0 */
void turno_jugador();
void turno_computadora();

int main()
{
do
{
    int h, menu;
    cout<<"Menu: \n";
    cout<<"1)Jugar \n";
	cout<<"2)Instrucciones \n";
	cout<<"3)Ver Creditos \n";
	cout<<"4)Salir \n";
	cin>>menu;
	
    switch(menu)
    {
         case 1:
                 
                     
                        jugador = 1; 
                        turno = 0;
                        do
                        {
                              turno++;
                              if (jugador) turno_jugador(); else turno_computadora();
                              print_XO();
                         }
                         while ((!ganador())&&(turno<=8));
                         switch (ganador())
                         {
                                case 0:
                                	 cout<<"\n ------------ \n";
                                     cout<<"\n | EMPATAMOS |\n";
                                     cout<<"\n ------------\n";
									 break;
                                     
                                case 1:
                                	 cout<<"\n ------------";
                                     cout<<"\n | TU GANAS |\n";
                                     cout<<" ------------\n";
									 break;
                                
                                case -1:
                                	 cout<<"\n ------------------";
                                     cout<<"\n | YO TE GANO |\n";
                                     cout<<" ------------------\n";
									 break;
                         }
                                                                       
                 
                 break;
           	case 2:
              cout<<" Vamos a jugar X 0 \n Las casillas estan enumeradas asi: \n 1 |2 |3 \n --+--+-- \n 4 |5 |6 \n --+--+-- \n 7 |8 |9 \n";
              cout<<" Elije una casilla pulsando un numero. Una vez que tu marques, marcare yo. \n Gana quien haga una linea de tres caracteres iguales \n ya sean horizontales, verticales o diagonales \n";
              getchar();
              break;
           	case 3:
              cout<<"\n          UNIVERSIDAD DE EL SALVADOR \n     Facultad Multidisciplinaria Oriental \n     Ingenieria de Sistemas Informaticos \n";
			  cout<<"               Programacion I \n             Ing. Ligia Astrid \n";
			  cout<<"Programa que juega X 0 con el usuario hecho por:\n          Jesus Steven Medrano Carballo";
              getchar();
              break;
            case 4:
               cout<<"\n Fue un placer jugar contigo";
               getchar();
               exit(1);
              break;    
         } 
         cout<<"\n\n Volver al menu? digita una s para volver o n para salir ";
         cin>>denuevo;
         if (denuevo>=97) denuevo-=32;
         if ((denuevo!='s')&&(denuevo!='n'))
         for (h=0;h<=8;h++) c[h]=0;         
}
while (denuevo=='S');             
getchar();

}

void print_XO() /*esta funcion acomoda los valores en el dibujo del tablero*/
{
   cout<<"\n"<<tirada(c[0])<<"  | "<<tirada(c[1])<<"  | "<<tirada(c[2])<<"\n ---+---+--- \n"<<tirada(c[3])<<"  | "<<tirada(c[4])<<"  | "<<tirada(c[5])<<"\n ---+---+--- \n"<<tirada(c[6])<<"  | "<<tirada(c[7])<<"  | "<<tirada(c[8])<<"\n";
}

char tirada(int i)
{
     switch (i)
     {
            case (-1):
                 return 'X';
                 break;
                 
            case (1):
                 return 'O';
                 break;
                 
            default:
                    return ' ';
     }
}

int ganador() /*esta funcion compara el arreglo con los patrones de posible ganador*/
{
    if ((c[0]+c[1]+c[2]==3)|| (c[3]+c[4]+c[5]==3)|| (c[6]+c[7]+c[8]==3)|| (c[6]+c[3]+c[0]==3)|| (c[7]+c[4]+c[1]==3)|| (c[8]+c[5]+c[2]==3)|| (c[6]+c[4]+c[2]==3)|| (c[8]+c[4]+c[0]==3)) return 1;
    else if ((c[0]+c[1]+c[2]==-3)|| (c[3]+c[4]+c[5]==-3)|| (c[6]+c[7]+c[8]==-3)|| (c[6]+c[3]+c[0]==-3)|| (c[7]+c[4]+c[1]==-3)|| (c[8]+c[5]+c[2]==-3)|| (c[6]+c[4]+c[2]==-3)|| (c[8]+c[4]+c[0]==-3)) return -1;
    else return 0;
}

void turno_jugador() /*coloca el caracter en la casilla seleccionada y verifica que no este ocupada*/
{
     int quieres;
     cout<<"\n Te toca, En que casilla quieres marcar? [1-9]  ";
     cin>>quieres;
     
     if ((quieres>9)|| (quieres<1)|| (c[quieres-1]!=0))
     {
                       do
                       {
                                     cout<<"\n Esa casilla esta ocupada, intenta en otra: [1-9] ";
                                     fflush(stdin);
                                     
                                     cin>>quieres;
                       }
                       while ((quieres>9)|| (quieres<1)|| (c[quieres-1]!=0));
     }
     
     c[quieres-1]=1;
     jugador = 0;
}

void turno_computadora() /* coloca el valor de la computadora a tirar, en una posicion aleatoria*/
{
     int quiero;
     time_t t;
     cout<<"\n Me toca, marco en la casilla: ";
     do
     {
                  srand(time(&t));
                  quiero=rand()%9;
     }
     while (c[quiero]!=0);
     cout<<quiero + 1;
     
     c[quiero]=-1;
     jugador = 1;
}
    
