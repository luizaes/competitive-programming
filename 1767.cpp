/* Paradigmas, 1767 - Saco do Papai Noel */
#include <iostream>
#include <vector>

using namespace std;
#define PESO_TOTAL 50

int main() {

	int num_casos, cont = 0, i, j, k, resultado, aux = 0, aux2 = 0, cont_pacotes = 0, qtd_pacotes, brinquedos, peso;
	vector<int> peso_pacotes, qtd_brinquedos;

	cin >> num_casos;

	while(cont < num_casos) {

		cin >> qtd_pacotes;
		qtd_brinquedos.push_back(0);
		peso_pacotes.push_back(0);
		int tabelaMochila[qtd_pacotes+1][PESO_TOTAL+1];

		// Guardando valores referentes a "valor" e peso em vectors
		for(i = 0; i < qtd_pacotes; i++) {
			cin >> brinquedos >> peso;
			qtd_brinquedos.push_back(brinquedos);
			peso_pacotes.push_back(peso);
		}

		// Inicializando
		for(i = 0; i <= qtd_pacotes; i++) {
			for(j = 0; j  <= PESO_TOTAL; j++) {
				tabelaMochila[i][j] = 0;
			}
		}

		// Calculando a tabela
		for(i = 1; i <= qtd_pacotes; i++) {
			for(j = 1; j  <= PESO_TOTAL; j++) {
				if(peso_pacotes[i] <= j && peso_pacotes[i] > 0) {
					tabelaMochila[i][j] = max(tabelaMochila[i-1][j], qtd_brinquedos[i] + tabelaMochila[i-1][j-peso_pacotes[i]]);
				} else {
					tabelaMochila[i][j] = tabelaMochila[i-1][j];
				}
				
			}
		}

		resultado = aux = tabelaMochila[qtd_pacotes][PESO_TOTAL];
		j = PESO_TOTAL;
		i = qtd_pacotes;
		peso = 0;
		aux2 = resultado;

		while(i > 0 && aux > 0) {

			if(tabelaMochila[i-1][j] != aux2) {
				k = j;
				while(tabelaMochila[i][k] == aux2) {
					k--;
				}		
				j = k+1;
				cont_pacotes++;
				peso += peso_pacotes[i];
				aux -= qtd_brinquedos[i];
				j -= peso_pacotes[i];
				aux2 = tabelaMochila[i-1][j];
			}

			i--;
		}
			
		cout << resultado << " brinquedos" << endl;
		cout << "Peso: " << peso << " kg" << endl;
		cout << "sobra(m) " << qtd_pacotes-cont_pacotes << " pacote(s)" << endl;
		cout << endl;
		cont_pacotes = 0;
		qtd_brinquedos.clear();
		peso_pacotes.clear();
		cont++;
	}

	return 0;
}