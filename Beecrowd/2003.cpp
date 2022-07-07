/* Iniciante, 2003 - Domingo de Manhã */
#include <iostream>

using namespace std;

int main() {

	int horas, minutos, atraso = 0;

	while(cin >> horas) {
		cin.get();
		cin >> minutos;
		atraso = (horas+1)*60 + minutos;
		atraso = atraso - 8*60;

		if(atraso <= 0) {
			cout << "Atraso maximo: 0" << endl; 
		} else {
			cout << "Atraso maximo: " << atraso << endl;
		}
	}

	return 0;
}