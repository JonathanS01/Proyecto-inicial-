#include <iostream>
#include<math.h>
using namespace std;

main (){
	
//	int opcion  = 0;
	char op;
	double n1,n2,result;
	cout<<"vamos a trabajar con switch - case \n";
	cout << " ingrese una opcion \n";
	 cout << " ingrese s, S para suma\n";
	  cout << " ingrese r, R para resta\n";
	  cout << " ingrese m, M para multiplicación\n";
	  cout << " ingrese d, D para division\n";
	  cout << " ingrese p, p para potenciacion";
	  cout << "ingrese un numero para efectuar las operaciones\n";
	  cin >> n1;
	  cout << "ingrese un segundo numero para efectuar las operaciones\n";
	  cin >> n2;
	cin>> op;
	 
		switch (op)
		{
			case 1:
			case 's': 
			case 'S':
				
			     result = n1 + n2;
				cout <<"la suma es:" << result << endl;
				break;
		
				
				case 2:
				case 'r':
				case 'R': 
					
				     result = n1 - n2;
					cout <<" la resta es:"  << result <<endl;
					break;
				
						
						case 3:
					     case 'm':
					     case 'M':
					
							
						     result = n1 * n2;
							cout <<"la multiplicación es:" <<result <<endl;
							break;
							
							
								case 4:
								case 'd':
								case 'D':
								
								result = n1 /n2;
								cout <<" la division es:" <<result <<endl;
								break;
								
									case 5:
									case 'p':
									case 'P':	
									
										result = pow(n1,n2);
										cout << " la potencia de:" <<n1 <<"es:" << result <<endl;
										return (0);	
						
							
								default:
									
								
									cout <<"no hay operación valida";
									break;
								
		}
	
	
	
	
	
}
