#include <iostream>
#include <stdio.h>

using namespace std;
main (){
	int cantidad [4][4];
	for (int i=0;i<4;i++)
		{
			for (int j=0;j<4;j++)
				{
					cout<<"Digite un numero ["<<i<<"]["<<j<<"] \n";
					cin>>cantidad [i][j];
				}
		}
	cout<<endl<<"\t\t\t"<<"Imprimiendo... \n";
	system ("color b");
	for (int i=0;i<4;i++)
		{
			cout<<"=================================================================\n";
			cout<<"=";
			for (int j=0;j<4;j++)
				{
					cout<<"\t"<<cantidad [i][j]<<"\t=";
				}
			cout<<endl;			
		}
	cout<<"=================================================================";
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t Matriz transpuesta"<<endl;
	cout<<endl;
	for (int i=0;i<4;i++)
		{
			cout<<"=================================================================\n";
			cout<<"=";
			for (int j=0;j<4;j++)
				{
					cout<<"\t"<<cantidad [j][i]<<"\t=";
				}
			cout<<endl;
		}
	cout<<"=================================================================";	
}
