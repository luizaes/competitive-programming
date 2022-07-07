/* Ad-hoc, 1216 - Getline One */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double resultado, soma_total = 0, contador = 0;
	int distancia;
	string nome;

	while(getline(cin, nome)) {
		cin >> distancia;
		cin.get();
		contador++;
		soma_total += distancia;
	}

	resultado = soma_total / contador;

	cout << fixed << setprecision(1) << resultado << endl;

	return 0;
}