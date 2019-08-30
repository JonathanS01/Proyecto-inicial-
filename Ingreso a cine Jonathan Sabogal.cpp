#include<iostream>

using namespace std; 
main(){
	int documento;
	cout<<"Bienvenid@ a cinecolombia \n";
	cout<<"Por favor presente su cedula para verificar su edad \n";
	cin>>documento;
	if(documento>=18)
		{
			cout<<"Ingrese cine adultos \n";
		}
	else
		{
			cout<<"Ingrese a cine para menores";
			}	
}
