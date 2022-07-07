#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, m, aux, cont = 0;
	bool deu = false;
	vector<int> problems;
	string saida = "";

	cin >> n >> m;
	int foi[n+1] = {0};

	for(int i = 0; i < m; i++) {
		cin >> aux;
		problems.push_back(aux);
		deu = false;

		if(foi[aux] == 0) {
			cont++;
		}
		foi[aux]++;

		if(cont == n) {
			saida += "1";
			for(int j = 0; j < n+1; j++) {
				foi[j]--;
				if(foi[j] == 0) {
					cont--;
				}
			}
		} else {
			saida += "0";
		}
	}

	cout << saida << endl;

	return 0;
}