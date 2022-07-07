/* Matemática, 1221 - Primo Rápido */
#include <iostream>
#include <cmath>

using namespace std;

int main() {

	long long int numero;
	bool achou = false;
	int i, num_casos, cont = 0;

	cin >> num_casos;
	while(cont < num_casos) {
		cin >> numero;
		achou = false;
		if(numero != 2) {
			for(i = 2; i <= ceil(sqrt(numero)); i++) {
				if(numero % i == 0) {
					achou = true;
					break;
				}
			}
		}

		if(achou) {
			cout << "Not Prime" << endl;
		} else {
			cout << "Prime" << endl;
		}

		cont++;
	}

	return 0;
}