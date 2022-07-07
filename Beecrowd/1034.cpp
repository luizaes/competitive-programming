#include <iostream>
#include <vector>
#include <algorithm>

#define INFINITO 10000000

using namespace std;

int main() {

	int contador = 0, num_casos, qtd, comprimento, i, coin;
	vector<int> coins;

	cin >> num_casos;
	while(contador < num_casos) {
		cin >> qtd >> comprimento;

		int value[comprimento+1];
		for(i = 0; i < qtd; i++) {
			cin >> coin;
			coins.push_back(coin);
		}

		value[0] = 0;

		for(i = 1; i <= comprimento; i++) {
			value[i] = INFINITO;

			for(auto c : coins) {
				if(i - c >= 0) {
					value[i] = min(value[i], value[i-c]+1);
				}
			}
		}
		cout << value[comprimento] << endl;
		coins.clear();
		contador++;
	}

	return 0;
}