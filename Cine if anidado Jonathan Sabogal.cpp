#include<iostream>

using namespace std; 
main(){
	int edad;
	cout<<"Bienvenid@ a cinecolombia \n";
	cout<<"Por favor presente su cedula para verificar su edad \n";
	cin>>edad;
	if(edad>=18)
		{
			cout<<"Ingrese cine adultos \n";
		}
	else
		if(edad<=0)
			{
				cout<<"No has nacido \n";
			}
		else		
			{
			cout<<"Ingrese a cine para menores";
			}	
}
