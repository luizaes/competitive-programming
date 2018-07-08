/* Paradigmas, 1288 - Canhão de Destruição */
#include <iostream>
#include <vector>

using namespace std;

int main() {

	int i, j, resultado = 0, ataques, poder, peso, capacidade, num_casos, cont = 0, resistencia;
	vector<int> poderes, pesos;

	cin >> num_casos;

	while(cont < num_casos) {

		cin >> ataques;

		pesos.push_back(0);
		poderes.push_back(0);

		// Guardando valores referentes a "valor" e peso em vectors
		for(i = 0; i < ataques; i++) {
			cin >> poder >> peso;
			pesos.push_back(peso);
			poderes.push_back(poder);
		}

		cin >> capacidade;
		cin >> resistencia;

		int tabelaMochila[ataques+1][capacidade+1];

		// Inicializando
		for(i = 0; i <= ataques; i++) {
			for(j = 0; j  <= capacidade; j++) {
				tabelaMochila[i][j] = 0;
			}
		}

		// Calculando a tabela
		for(i = 1; i <= ataques; i++) {
			for(j = 1; j  <= capacidade; j++) {
				if(pesos[i] <= j && pesos[i] > 0) {
					tabelaMochila[i][j] = max(tabelaMochila[i-1][j], poderes[i] + tabelaMochila[i-1][j-pesos[i]]);
				} else {
					tabelaMochila[i][j] = tabelaMochila[i-1][j];
				}
				
			}
		}

		resultado = tabelaMochila[ataques][capacidade];
		
		if(resultado >= resistencia) {
			cout << "Missao completada com sucesso" << endl;
		} else {
			cout << "Falha na missao" << endl;
		}

		pesos.clear();
		poderes.clear();
		cont++;
	}

	return 0;
}