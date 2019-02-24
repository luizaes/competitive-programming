#include <bits/stdc++.h>

using namespace std;

int main() {

	long long int tiers, aux, indiceAtual1 = 0, indiceAtual2 = 0, distancia1 = 0, distancia2 = 0, cont = 0;
	vector<long long int> casas, distancias;

	cin >> tiers;

	distancias.assign(2*tiers, -1);

	for(int i = 0; i < 2*tiers; i++) {
		cin >> aux;
		casas.push_back(aux);
	}

	for(int i = 0; i < casas.size(); i++) {
		if(distancias[2*(casas[i]-1)] == -1) {
			distancias[2*(casas[i]-1)] = i;
		} else {
			distancias[2*(casas[i]-1) +1] = i;
		}
	}

	for(int i = 0; i < distancias.size()-1; i+=2) {
		distancia1 += abs(indiceAtual1 - distancias[i]);
		indiceAtual1 = distancias[i];
	}

	for(int i = 1; i < distancias.size(); i+=2) {
		distancia2 += abs(indiceAtual2 - distancias[i]);
		indiceAtual2 = distancias[i];
	}

	cout << distancia1+distancia2 << endl;

	return 0;
}