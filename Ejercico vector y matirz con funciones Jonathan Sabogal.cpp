#include <iostream>
#include <windows.h>

using namespace std;
void vector ();
void vector1 ();
void vector2 ();
void vector3 ();
void vector4 ();
void vector5 ();
void vector6 ();
void vector7 ();
void vector8 ();
void vector9 ();
void matriz ();
void matriz1 ();
void matriz2 ();
void matriz3 ();
void matriz4 ();
void matriz5 ();
void matriz6 ();
void matriz7 ();
void salida ();
	
void vector ()
	{
		string vector []={"Juan","Pedro","Maria","Jose","Petronio","Ancelmo"};
		for (int q=0;q<=5;q++)
			{
				cout<<vector[q]<<"\n";
			}
		cout<<endl;
	}
void vector1 ()
	{
		string vector1 [3];
			  vector1 [0]="Felipe";
			  vector1 [2]="Josefa";
			  vector1 [1]="Martin";
		for (int w=0;w<3;w++)
			{
				cout<<vector1[w]<<"\n";
			}
		cout<<endl;	  
	}
void vector2 ()
	{
		char vector2 []={'P','r','o','g','r','a','m','a','n','d','o'};
		for (int e=0;e<=10;e++)
			{
				cout<<vector2[e];
					 
			}
		cout<<endl;
	}
void vector3 ()
	{
		char vector3 [3];
			vector3 [1]='S';
			vector3 [2]='Q';
			vector3 [0]='L';
		for (int r=0;r<3;r++)
			{
				cout<<vector3[r]<<"\n";
			}
		cout<<endl;	
	}
void vector4 ()
	{
		double vector4 []={5.8,6.9,3.5};
		for (int t=0;t<3;t++)
			{
				cout<<"> "<<vector4[t]<<"\n";
			}
		cout<<endl;
	}
void vector5 ()
	{
		double vector5 [2];
			  vector5 [0]=8.3;
			  vector5 [1]=8.0;
		for (int y=0;y<2;y++)
			{
				cout<<"> "<<vector5[y]<<"\n";
			}
		cout<<endl;	  
	}	
void vector6 ()
	{
		float vector6 []={3,5,0};
		for (int t=0;t<3;t++)
			{
				cout<<"> "<<vector6[t]<<"\n";
			}
		cout<<endl;
	}
void vector7 ()
	{
		float vector7 [3];
			 vector7 [0]=2.1;
			 vector7 [2]=3;
			 vector7 [1]=4;
		for (int y=0;y<3;y++)
			{
				cout<<"> "<<vector7[y]<<"\n";
			}
		cout<<endl;	  
	}
void vector8 ()
	{
		int vector8 []={1,2,3,4,5,6};
		for (int t=0;t<6;t++)
			{
				cout<<"> "<<vector8[t]<<"\n";
			}
		cout<<endl;
	}
void vector9 ()
	{
		int vector9 [2];
		    vector9 [0]=1;
		    vector9 [1]=2;
		for (int y=0;y<2;y++)
			{
				cout<<"> "<<vector9[y]<<"\n";
			}
		cout<<endl;	  
	}
void matriz ()
	{
		string matriz [4][3]={{"Pedro","Juan","Jose"},{"Ana","Rocio","Pirna"},{"Victor","Jonathan","Mila"},{"Juliana","Adriana","Rossana"}};
		for (int o=0;o<=3;o++)
			{
				for (int p=0;p<=2;p++)
					{
						cout<<"> "<<matriz[o][p]<<"\n";
					}
				cout<<endl;
			}
	}
void matriz1 ()
	{
		string matriz1 [3][3];
			  matriz1 [0][0]="Pablo";
			  matriz1 [1][0]="Argemiro";
			  matriz1 [0][1]="Vilma";
			  matriz1 [1][2]="Ana";
			  matriz1 [2][2]="Ismael";
		for (int f=0;f<=2;f++)
			{
				for (int g=0;g<=2;g++)
					{
						cout<<"> "<<matriz1[f][g]<<"\n";
					}
				cout<<endl;
			}	  
	}
void matriz2 ()
	{
		char matriz2 [4][3]={{'S','Q','L'},{'M','A','R'},{'S','O','L'},{'P','A','N'}};
		for (int h=0;h<=3;h++)
			{			
				for (int j=0;j<=2;j++)
					{
						cout<<matriz2[h][j];
					}
				cout<<endl;
			}
	}
void matriz3 ()
	{
		char matriz3 [3][3];
			matriz3 [0][2]='P';
			matriz3 [1][1]='Q';
			matriz3 [2][2]='L';
		for (int k=0;k<=2;k++)
			{
				for (int l=0;l<=2;l++)
					{
						cout<<matriz3[k][l]<<"\n";
					}
				cout<<endl;
			}	  
	}
void matriz4 ()
	{
		int matriz4 [3][3]={{1,2,3},{4,5,6},{7,8,9}};
		for (int n=0;n<=2;n++)
			{			
				for (int m=0;m<=2;m++)
					{
						cout<<"> "<<matriz4[n][m]<<"\n";
					}
				cout<<endl;
			}
	}
void matriz5 ()
	{
		int matriz5 [3][3];
		    matriz5 [0][1]=2;
		    matriz5 [1][2]=3;
		    matriz5 [2][1]=4;
		for (int u=0;u<=2;u++)
			{
				for (int i=0;i<=2;i++)
					{
						cout<<matriz5[u][i]<<"\n";
					}
				cout<<endl;
			}	  
	}
void matriz6 ()
	{
		float matriz6 [3][3]={{1.1,2.5,3.6},{4.8,5.7,6.9},{7.5,8.1,9.0}};
		for (int n=0;n<=2;n++)
			{			
				for (int m=0;m<=2;m++)
					{
						cout<<"> "<<matriz6[n][m]<<"\n";
					}
				cout<<endl;
			}
	}
void matriz7 ()
	{
		float matriz7 [3][3];
		      matriz7 [0][0]=2.5;
		      matriz7 [2][2]=3.6;
		      matriz7 [1][1]=4.8;
		for (int u=0;u<=2;u++)
			{
				for (int i=0;i<=2;i++)
					{
						cout<<matriz7[u][i]<<"\n";
					}
				cout<<endl;
			}	  
	}
void salida ()
	{
		cout<<endl;
		cout<<"Ejecucion terminada \n";
		cout<<endl;
	}				
main (){
	int opcion;
	cout<<"Ingrese una opcion del menu \n";
	cout<<endl;
	cout<<"1)  Para vector \n";
	cout<<"2)  Para vector 1 \n";
	cout<<"3)  Para vector 2 \n";
	cout<<"4)  Para vector 3 \n";
	cout<<"5)  Para vector 4 \n";
	cout<<"6)  Para vector 5 \n";
	cout<<"7)  Para vector 6 \n";
	cout<<"8)  Para vector 7 \n";
	cout<<"9)  Para vector 8 \n";
	cout<<"10) Para vector 9 \n";
	cout<<"11) Para matriz \n";
	cout<<"12) Para matriz 1 \n";
	cout<<"13) Para matriz 2 \n";
	cout<<"14) Para matriz 3 \n";
	cout<<"15) Para matriz 4 \n";
	cout<<"16) Para matriz 5 \n";
	cout<<"17) Para matriz 6 \n";
	cout<<"18) Para matriz 7 \n";
	cout<<endl;
	cout<<endl;
	cin>>opcion;
	switch (opcion)
	{
		case 1: 
			vector();
			break;
		case 2:
			vector1();
			break;
		case 3:
			vector2();
			break;
		case 4:
			vector3();
			break;
		case 5:
			vector4();
			break;
		case 6:
			vector5();
			break;
		case 7:
			vector6();
			break;
		case 8:
			vector7();
			break;
		case 9:
			vector8();
			break;
		case 10:
			vector9();
			break;
		case 11:
			matriz();
			break;
		case 12:
			matriz1();
			break;
		case 13:
			matriz2();
			break;
		case 14:
			matriz3();
			break;
		case 15:
			matriz4();
			break;
		case 16:
			matriz5();
			break;
		case 17:
			matriz6();
			break;
		case 18:
			matriz7();
			break;
		default:
			salida();			
	}
	char mensaje[]={'P','R','O','G','R','A','M','A','C','I','O','N',' ','D','E',' ','S','O','F','T','W','A','R','E'};
	cout<<"\t\t\t";
	for (int i=0;i<=23;i++)
	{
		cout<<mensaje[i];
		Sleep(80);
	}
	cout<<"\n\n\n \t\t\t Programa finalizado \n\n";
	
}
