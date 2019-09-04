#include <iostream>
#include <stdio.h>

using namespace std;
int opcion,b,h,bs;
void suma();
void pide();
void car();
void mensaje();
void pares();
char a;
void impares();
void mientras();
void salida();




void suma (){
int n1,n2,result;
cout<<"Ingrese primer numero para la suma \n";
cin>>n1;
cout<<"Ingrese segundo numero para la suma \n";
cin>>n2;
result=n1+n2;
cout<<"El resultado es: "<<result;
cout<<endl;
cout<<endl;
}




void pide (){
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

void car (){	
	cout <<" ingrese un caracter\n";
	cin >>a;
	
	
	while (a != 's'){
		for (int tabla = 5; tabla <6;)
		{
			for (int q = 1; q <10; q++){
				cout << q*tabla <<"\t";
							     	}
			cout << endl;
		}
		
				}
	
	do 	{
		cout <<" ingrese numero para la base\n";
		cin >>b;
		cout <<" ingrese la altura del triangulo\n";
		cin >>h;
		
		bs = (b * h)/2;
		cout <<" el area del triangulo es:  " <<bs <<endl;
		
		
		
		}
	
		
	
		}





main (){
	
	car ();
	suma();
	pide();
	
	
	
}
