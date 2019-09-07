#include <iostream>

using namespace std;
main (){
	int comico[100],numero,mayor=0;
	cout<<"ingrese la cantidad de elementos del vector \n"<<endl;
	cin>>numero;
	cout<<endl;
	for (int i=0;i<numero;i++)
		{
			cout<<i+1<<" Ingrese un numero  ";
			cin>>comico[i];
			if (comico [i]>mayor)
				{
					mayor=comico [i];
				}
		}
	cout<<endl;
	cout<<"El numero mayor de los ingresados es: "<<mayor;
}
