#include<iostream>

using namespace std; 
main(){
	int n1,n2,resp,mult,rest,div;
	cout<<"Programa para ingresar numero \n";
	cout<<"E imprimir la suma\n";
	cout<<"Ingrese el primer numero para la suma \n";
		cin>>n1;
	cout<<"Ingrese el segundo numero para la suma \n";
		cin>>n2;
	resp=n1+n2;
	rest=n1-n2;
	mult=n1*n2;
	div=n1/n2;
	cout<<"El resultado de la suma es: "<<resp;
	cout<<endl;
	cout<<"El resultado de la resta es: "<<rest;
	cout<<endl;
	cout<<"El resultado de la multiplicacion es: "<<mult;
	cout<<endl;
	cout<<"El resultado de la divicion es: "<<div;
	cout<<endl;
}
