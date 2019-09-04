#include <iostream>
#include <stdio.h>

using namespace std;
int opcion,b,h,bs,num2;
void suma();
void pide();
void car();
void mensaje();
void sumatoria();
void pares();
char a;
void impares();
void imprime();
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
	
	
	while (a != 's') {
	
	int tabla =5;
			for (int q = 1; q <10; q++){
				cout << q*tabla <<"\t";
							     	}
			cout << endl;
		
		     cin>> a ;
				}
				
				
			
				
	do
		{
		cout <<" ingrese numero para la base\n";
		cin >>b;
		cout <<" ingrese la altura del triangulo\n";
		cin >>h;
		
		bs = (b * h)/2;
		cout <<" el area del triangulo es:  " <<bs <<endl;
		
		
		
		}
	while (a != 's');
		
	
		}
		
void mensaje(){
	cout <<" buenas noches\n";
}

void sumatoria(){
	int a;
	 cout<<"ingrese un numero \n";
	 cin>>a;
	int ca= 0;
	int be = 0;
	while (a == 123){
		
		
	     while ( be <11){
	     	
	     	ca = ca+ be;
	     	be = be + 2;
	     	
	     	cout << ca;
		}
	
	cin >> ca;
	}
	
}

void pares(){
	
	
	for (int m= 20; m <=69; m= m+1 ){
	 m= m+1;	
		cout <<"numeros pares"<< m <<endl;
	}
	
	
}

void imprime(){
	int l = 0;
	while (l <=9 ){
		
		l= l+1;
		cout <<" esto es una impresión\n";
		
	}
}

void salida (){
	
	cout <<" mensaje saliendo\n";
}





main (){
	int op;
	cout << " ingrese una opcion\n";
	cout << " ingrese 1 para suma\n";
	cout << " ingrese 2 par e impar\n";
	cout << " ingrese 3 para caracter\n";
    cout << " ingrese 4,5 o 6  para mensaje\n";
	cout << " ingrese 7 sumatoria \n";
	cout << " ingrese 8 numeros de 20 a 70\n";
	cout << " ingrese 9 impresion\n";
	cout << " ingrese 10 salir\n"<<endl;
	cin>> op;
	switch (op){
	
	case 1:
	      suma();
	      break;
	case 2:
		pide();
	      break;
	case 3:
		car ();
	      break;
    case 4:
	case 5:
	case 6:
	      mensaje ();
	      mensaje ();
	    	break;
     case 7:
     	  sumatoria();
	    	break;
     case 8: 
	     pares();
	     break;
	     
	case 9:
	     imprime ();
	     break;
	     
    case 10:
    	 default:
    	 	salida ();
    	 	break;
}
	
}
