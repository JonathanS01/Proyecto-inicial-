#include <iostream>

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
	for (int i=0;i<4;i++)
		{
			cout<<"Usted va en: "<<i<<endl;
			for (int j=0;j<4;j++)
				{
					cout<<"["<<i<<"]["<<j<<"]\n";
					cout<<cantidad [i][j]<<"\n";
				}			
		}
}
