/* Autor: Alexander Velasquez - 201556089
 * Descripcion: Calculadora con las 4 operaciones basicas
 * Fecha de creacion: 4/03/2017
 * Fecha ultima modificacion: 4/03/2017
*/

#include <iostream>
using namespace std;
//un cambio
int main(){
	int numero1, numero2, operador, resultado;
		
	cout << "ingrese el primer numero: ";
	cin >> numero1;
	
	cout << "ingrese el segundo numero: ";
	cin >> numero2;
	
	cout << "ingrese un numero para indicar la operacion: \n"
	<< "1 para multiplicacion \n" << "2 para division \n"
	<< "3 para suma \n" << "4 para resta \n" << endl;
	cin >> operador;
	
	

switch(operador){
		case 1:
			resultado= numero1*numero2;
			break;
		case 2:
			if(numero2 <= 0){
			cout << "en el caso de la division el segundo numero debe ser mayor que 0" << endl;
			}
			resultado= numero1/numero2;
			break;
		case 3:
			resultado= numero1+numero2;
			break;
		case 4:
			resultado= numero1-numero2;
			break;
		default:
			cout << "operador no valido" << endl;
		
}
	if (operador < 4 || operador < 1){
		cout << "operador no valido" << endl;
	}
	else if(numero2 <= 0){
			cout << "en el caso de la division el segundo numero debe ser mayor que 0" << endl;
			}
		else cout << "el resultado es: " << resultado << endl;
}
