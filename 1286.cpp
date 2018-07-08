/* Paradigmas, 1286 - Motoboy */
#include <iostream>
#include <vector>

using namespace std;

int main() {

	int i, j, resultado = 0, num_pedidos, tempo, pizzas, qtd_max;
	vector<int> tempo_entregas, qtd_pizzas;

	while(true) {

		cin >> num_pedidos;
		if(num_pedidos == 0) {
			break;
		}

		cin >> qtd_max;

		qtd_pizzas.push_back(0);
		tempo_entregas.push_back(0);
		int tabelaMochila[num_pedidos+1][qtd_max+1];

		// Guardando valores referentes a "valor" e peso em vectors
		for(i = 0; i < num_pedidos; i++) {
			cin >> tempo >> pizzas;
			qtd_pizzas.push_back(pizzas);
			tempo_entregas.push_back(tempo);
		}

		// Inicializando
		for(i = 0; i <= num_pedidos; i++) {
			for(j = 0; j  <= qtd_max; j++) {
				tabelaMochila[i][j] = 0;
			}
		}

		// Calculando a tabela
		for(i = 1; i <= num_pedidos; i++) {
			for(j = 1; j  <= qtd_max; j++) {
				if(qtd_pizzas[i] <= j && qtd_pizzas[i] > 0) {
					tabelaMochila[i][j] = max(tabelaMochila[i-1][j], tempo_entregas[i] + tabelaMochila[i-1][j-qtd_pizzas[i]]);
				} else {
					tabelaMochila[i][j] = tabelaMochila[i-1][j];
				}
				
			}
		}

		resultado = tabelaMochila[num_pedidos][qtd_max];
			
		cout << resultado << " min." << endl;
		qtd_pizzas.clear();
		tempo_entregas.clear();
	}

	return 0;
}