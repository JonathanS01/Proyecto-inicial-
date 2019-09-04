#include <iostream>

using namespace std;

void menu();
void suma();
void resta();
void mensaje();
void multiplicacion();
void division ();
int n1;
int n2;
int op;
int result;
void mensaje (){
	cout << " BIENVENIDO A LA CALCULADORA\n";
               }

void resta (){
	result = n1 - n2;
	cout << " estoy en la funcion resta\n" << result << endl;;
             }

void suma () {
	result = n1 + n2;
	cout << " estoy en la funcion suma\n" << result << endl;
	     
             }
             
void multiplicacion () {
	result = n1 * n2;
	cout << " estoy en la funcion multiplicacion\n" << result << endl;
	     
             }
             
void division () {
	result = n1 / n2;
	cout << " estoy en la funcion division\n" << result << endl;
	     
             }
             
void menu (){
	cout << " ingrese 1 para suma\n";
	  cout << " ingrese 2 para resta\n";
	  cout << " ingrese 3 para multiplicación\n";
	  cout << " ingrese 4 para division\n";
	  cout << " ingrese 5 para potenciacion" <<endl;
}

main (){
setlocale(LC_CTYPE,"spanish");
mensaje ();	  
menu ();
cout << "ingrese un numero para efectuar las operaciones\n";
	  cin >> n1;
	  cout << "ingrese un segundo numero para efectuar las operaciones\n";
	  cin >> n2;
	  cout << "escoja una opción\n";
	  cin >> op;
       

		switch (op){
			
			case 1:
			case 's': suma ();
			break;
			
			case 2:
			case 'r': resta ();
			break;
			
			case 3:
			case 'm': multiplicacion();
			break;
			
			case 4:
			case 'd': division();
			break;
			
			default :
			
			cout << " opcion invalida\n";	
		}
	  







}
