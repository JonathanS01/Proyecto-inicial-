#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>

using namespace std;
int opcion;
void suma();
void numero();
void caracter();
void mensaje();
void pares();
void impares();
void mientras();
void salida();
void suma (){
		int n1,n2,rtd;
		cout<<"Ingrese primer numero para la suma \n";
		cin>>n1;
		cout<<"Ingrese segundo numero para la suma \n";
		cin>>n2;
		rtd=n1+n2;
		cout<<"El resultado es: "<<rtd;
		cout<<endl;
		cout<<endl;
}
void numero (){
	int a;
    	cout<<("Ingresa un numero ")<<endl;
    	cin>>a;
    	cout<<endl;
    	if(a%2==0)
	{
     	for (int i=0;i<10;i++)
		{
			cout<<i+1<<"\t";
			cout<<endl;
		}
    	}	
	else
	{
     	for (int j=19;j<30;j++)
		{
			cout<<j+1<<"\t";
			cout<<endl;
		}
    	}
}
void caracter (){
	char x;
	cout<<"Ingrese caracter \n";
	cin>>x;	
	while (x!='s')
		{
			cout<<"5"<<endl<<" "<<endl;
			int tabla=5;
				for (int z=1;z<11;z++)
				{
					cout<<z*tabla<<"\t"<<endl;
				}
				cout<<endl;														
			cin>>x;						
		}
	do
		{
			int b,h,area;
			cout<<"Vamos a halla el area de un triangulo \n";
			cout<<endl,
			cout<<"Ingrese el valor de la base \n";
			cin>>b;
			cout<<"Ingrese el valor de la altura \n";
			cin>>h;
			area=b*h/2;
			cout<<"El resultado es: \n" <<area<<endl;
				
		}
	while (x!='s');	
}
void mensaje (){
	cout<<"Buenas noches \n";
}
void pares (){
	int q,l,suma;
	cout<<"Suma de numeros pares de 1 a 10 \n";
	cout<<"Ingrese numeo \n";
	cin>>q;
	suma=0;
	l=0;	
	while (q==123)
		{							
			while(l<11)
				{								
					suma=suma+l;
					l=l+2;
					cout<<"El resultado es: "<<suma<<endl;	
					cout<<endl;
					
				}
			cin>>q;	
		}
	
}
void impares (){
	for(int d=19;d<69;d=1+d)
		{
			d=d+1;
			cout<<"Lo numeros impares son: \t"<<d+1<<"\t";
			cout<<endl;	
		}


}
void mientras (){
	int s=0;
	while (s<10)
		{
			s=s+1;
			cout<<"Esto es una impresion \n";
				
		}
}
void salida (){
	cout<<"Saliendo \n";
}

main (){	
	system ("color b");
	cout<<"Ingrese una opcion del menu \n";
	cout<<"digite 1 para suma \n";
	cout<<"Digite 2 para ejercicio pares e impares \n";
	cout<<"Digite 3 para ejercicio caracter \n";
	cout<<"Digite 4,5 o 6 para mensaje \n";
	cout<<"Digite 7 para suma de numeros pares \n";
	cout<<"Digite 8 para numeros impares \n";
	cout<<"Digite 9 para mensaje repetido \n";
	cout<<"Digite 10 para salir \n";
	cout<<endl;
	cin>>opcion;
	switch (opcion){		
			case 1:
				suma();
				break;
			case 2:
				numero();
				break;
			case 3:
				caracter();
				break;
			case 4:
			case 5:
			case 6:
				mensaje();
				mensaje();
				break;
			case 7:
				pares();
				break;
			case 8:
				impares();
				break;
			case 9:
				mientras();
				break;
			default:
				salida ();
				break;
				}
}
