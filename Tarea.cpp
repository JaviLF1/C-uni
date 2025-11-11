#include<iostream>
#include<string>
#include <typeinfo> 
#include <cmath>
#include <vector>


using namespace std;

void operaNumeros() {
	float num1;
	float num2;
	char action;
	bool tryAgain = true;

	while (tryAgain) {
		bool fail = false;

		cout << "Ingresa 2 numeros\n";
		cin >> num1;
		cin >> num2;
		if (cin.fail()) {
			fail = true;
			cin.clear();
			cin.ignore(1000, '\n');
		}


		cout << "Que quieres hacer con los numeros\n";
		cout << "Escribe la lentra en parentesis para seleccionar la opción\n";
		cout << "Suma(S),Resta(R){primero-segundo},Multiplicación(M)\n";
		cin >> action;
		action = toupper(action);
		//83=S, 82=R, 77=M
		if ((action == 83) or (action == 82) or (action == 77)) {

			tryAgain = false;
			
			if (fail == true) {
				tryAgain = true;	
				cout<< "Parece ser que no ingresaste un numero, vuelve a intentar\n";

			}

		}
		else {
			cout << "Parece ser que ingresaste una letra erronea, vuelve a intentar\n";

		}

	}
	if (action == 83) {
		cout << "Tu resultado de tu suma es " << (num1 + num2) << endl;
	}
	if (action == 82) {
		cout << "Tu resultado de tu restaes " << (num1 - num2) << endl;
	}
	if (action == 77) {
		cout << "Tu resultado de tu multiplicación es " << (num1 * num2) << endl;
	}

}
void numeroImpar() {

	float isOdd;
	bool repet=true;

	while (repet) {
		cout << "Ingresa un numero impar, no seras libre hasta que ingreses un numero impar\n";
		cin >> isOdd;
		if ((fmod(isOdd, 2) > 0)|| (fmod(isOdd, 2) < 0)) {
			repet = false;
		}
	}
	cout << "Eres libre\n";
}
void mediaAritmetica() {
	int numOfElements=0;
	float totalSum=0;
	float inUseNum;
	

	cout << "Vamos a sacar el promedio, primero indicame el numero de elementos a analizar\n";
	cin >> numOfElements;

	for (int i = 0;i < numOfElements;i++) {
		cout << "Ingres tu elemento " << i + 1 << endl;
		cin >> inUseNum;
		totalSum = totalSum + inUseNum;


	}
	cout << "El promedio de tus numeros es " << (totalSum / numOfElements);

	

}

int main() {
	//operaNumeros();
	mediaAritmetica();


	




	return 0;
}
