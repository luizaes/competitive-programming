/* Strings, 2174 - Coleção de Pomekon */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

	int i, j, qtd;
	string pomekon;
	vector<string> colecao;
	bool repetido = false;

	cin >> qtd;
	for(i = 0; i < qtd; i++) {
		cin >> pomekon;
		for(j = 0; j < colecao.size(); j++) {
			if(pomekon.compare(colecao[j]) == 0) {
				repetido = true;
				break;
			}
		}
		if(!repetido) {
			colecao.push_back(pomekon);
		}
		repetido = false;
	}

	cout << "Falta(m) " << 151 - colecao.size() << " pomekon(s)." << endl;

	return 0;
}