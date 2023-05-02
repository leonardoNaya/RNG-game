#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	std::srand(std::time(nullptr));
	bool acertar = false;
	float intentos = 20, intentousuario, ultimointento;
	int numerorandom = 1+(rand()%100), prueba100;
	cout << "---Bienvenido al juego del azar---" << endl;
	cout << "Debes adivinar el numero que he elegido, este numero se encuentra comprendido entre el 1 y el 100" << endl;
	do {
		if (intentos==1) {
			cout << "A todo o nada! 50/50!!!!" << endl;
			ultimointento = numerorandom+2;
			if (int(ultimointento/10)==int(numerorandom/10) || int(ultimointento/10)==10 && !(ultimointento==102)) {
				cout << "El numero es " << numerorandom << endl;
				cout << "O puede ser " << ultimointento << endl;
			} else {
				cout << "El numero es " << ultimointento-4 << endl;
				cout << "O puede ser " << numerorandom << endl;
			}
		}
		if (intentos==5) {
			prueba100 = int(numerorandom/10);
			if (prueba100==9 || prueba100==10) {
				cout << "Aqui te va una pista! El numero esta en la familia de los 90 o es el 100" << endl;
			} else {
				cout << "Aqui te va una pista! El numero esta en la familia de los " << int(numerorandom/10) << "0" << endl;
			}
		}
		if (intentos==10) {
			if ((numerorandom%2)==0) {
				cout << "Aqui te va una pista! El numero es par!" << endl;
			} else {
				cout << "Aqui te va una pista! El numero es impar!" << endl;
			}
		}
		if (intentos==15) {
			if (numerorandom>=50) {
				cout << "Aqui te va una pista! El numero es mayor o igual a 50!" << endl;
			} else {
				cout << "Aqui te va una pista! El numero es menor a 50!" << endl;
			}
		}
		cin >> intentousuario;
		if (intentousuario==numerorandom) {
			cout << "Felicidades! Adivinaste el numero!" << endl;
			acertar = true;
		} else {
			cout << "Ese no era!" << endl;
			intentos = intentos-1;
		}
	} while (!acertar && !(intentos==0));
	if (intentos==0) {
		cout << "Mas suerte la proxima! El numero era el " << numerorandom << endl;
		system("pause");
	} else {
		cout << "Nos vemos la proxima vez!" << endl;
		system("pause");
	}
	return 0;
}