#include <iostream>

using namespace std;

// Programa para validar while o do while 
main (){
	int n1,n2,x,z;
	cout<<"Ingrese un numero \n";
	cin>>n1;
	while(n1<123)    // while = a mientras 
		{
			cout<< endl;
			x=1;
				while(x<21)
				{		
					cout<< x << endl;
					x=x+1;
								
				}
			cin>>n1;
		}
		cout<<"Vamos a validar do while \n"; 
	do               // do = haga 
		{			
			z=20;
			do 
				{
					cout<< z << endl;			
					z=z+1;	
				}
			while (z<=40);					
			
			cin>>n1;				
		}
	while (n1<123);
}


	
