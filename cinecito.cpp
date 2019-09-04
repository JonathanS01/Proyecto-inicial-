#include <iostream>

using namespace std;

main() {
 int edad;
 
 cout <<" BIENVENIDO A CINEPOLIS" <<endl;
 cout << " por favor presente su documento" <<endl;
 cin >> edad;
 
 if (edad>=18)
    		 {
     	cout <<" ingrese a cine para adultos" <<endl;
     	
		}
 else if (edad<=0)
 	{
 	cout << " no has nacido"<<endl;
	 }
 
 else {
 	cout<<" ingresa a peliculas para menores"<<endl;
 	 }
 
     
}
