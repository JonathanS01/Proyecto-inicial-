#include <iostream>

using namespace std;
main () {
	int vector [10],numero;
	cout<<"Ingrese el numero \n";
	cin>>numero;
	for (int i=0;i<numero;i++)
		{
			cin>>vector[i];
			cout<<endl;
		}
	for (int i=0;i<numero;i++)
		{
			cout<<vector[i]<<endl;
		}
}
