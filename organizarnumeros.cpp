#include <iostream>

using namespace std;

main() {
 int n1, n2, n3;
 
 cout <<" ingrese un numero" <<endl;
 cin >> n1;
 cout << " ingrese segundo numero"<<endl;
 cin >> n2;
 cout << " ingrese tercer numero" <<endl;
 cin >> n3;
 
 if ((n1<n2)&&(n2<n3)) //123
	{
		cout << " el numero menor es"<< n1;
		cout << " el numero medio es"<< n2;
		cout << " el numero mayor es"<< n3;		
	}
 else if ((n1>n2)&&(n2>n3)) //321
 	{
 		cout << " el numero menor es"<< n3;
 		cout << " el numero medio es"<< n2;
 		cout << " el numero mayor es"<< n1;
	 }
 else if ((n1>n2)&& (n2<n3)&&(n1>n3))  //312.
 	{
 		cout << " el numero menor es"<< n2;
 		cout << " el numero medio es"<< n3;
 		cout << " el numero mayor es"<< n1;
	 }
	 
 /*else if (n3>n1)&& (n1>n2)
      {
      	cout << " el numero menor es"<< n2;
      	cout << " el numero medio es"<< n3;
      	cout << " el numero mayor es"<< n1;
	 }*/
	 
 else if ((n1<n2)&&(n2>n3)&&(n1>n3)) //231
 	{
 		cout << " el numero menor es"<< n3;
 		cout << " el numero medio es"<< n1;
 		cout << " el numero mayor es"<< n2;
	 }
	 
	 
 else if ((n1<n2)&& (n2>n3)&&(n1<n3)) //132
 
 	{
 		cout << " el numero menor es"<< n1;
 		cout << " el numero medio es"<< n3;
 		cout << " el numero mayor es"<< n2;
	 }
 
 else if ((n1>n2)&&(n2<n3)&& (n3>n1))  //213
 	{
 		cout << " el numero menor es"<< n2;
 		cout << " el numero medio es"<< n1;
 		cout << " el numero mayor es"<< n3;
	 }
 else 
 	{
 		((n1==n2)||(n2==n3));
		 
		 cout << "falla"; 
	 }
	 
 



}
