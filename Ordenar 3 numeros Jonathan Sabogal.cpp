#include <iostream>

using namespace std;
main(){
	int n1,n2,n3;
	cout<<"Programa para calcular el orden de los numeros \n";
	cout<<"Ingrese Primer numero \n";
	cin>>n1;
	cout<<"Ingrese segundo numero \n";
	cin>>n2;
	cout<<"Ingrese el tercer numero \n";
	cin>>n3;
	if ((n1<n2)&&(n2<n3))  //if para 123
		{
			cout<<"\n El numero menor es: "<<n1;
			cout<<"\n El numero medio es: "<<n2;
			cout<<"\n El numero mayor es: "<<n3;
		}
	else
		if ((n1<n2)&&(n2>n3)&&(n1<n3)&&(n1<n3))  //if para 132
		{
			cout<<"\n El numero menor es: "<<n1;
			cout<<"\n El numero medio es: "<<n3;
			cout<<"\n El numero mayor es: "<<n2;
		}
		else	
			if ((n1>n2)&&(n2<n3)&&(n3>n1))  //if para 213
			{
				cout<<"\n El numero menor es: "<<n2;
				cout<<"\n El numero medio es: "<<n1;
				cout<<"\n El numero mayor es: "<<n3;
			}
			else	
				if ((n1>n2)&&(n2<n3)&&(n1>n3))  //if para 312
				{
					cout<<"\n El numero menor es: "<<n2;
					cout<<"\n El numero medio es: "<<n3;
					cout<<"\n El numero mayor es: "<<n1;
				}
				else	
					if ((n1>n2)&&(n2>n3))  //if para 321
					{
						cout<<"\n El numero menor es: "<<n3;
						cout<<"\n El numero medio es: "<<n2;
						cout<<"\n El numero mayor es: "<<n1;
					}
					else	
						if ((n1<n2)&&(n2>n3)&&(n1>n3))  //if para 231
						{
							cout<<"\n El numero menor es: "<<n3;
							cout<<"\n El numero medio es: "<<n1;
							cout<<"\n El numero mayor es: "<<n2;
						}
						else	
							{							
								((n1==n2)||(n2==n3));
								
								cout<<"Operacion invalida";
							}
}
						
							

