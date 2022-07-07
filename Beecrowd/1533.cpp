/* Ad-hoc, 1533 - Detetive Watson */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector<int> suspeitos, copia;
	int i, num_suspeitos, prob;

	while(true) {
		cin >> num_suspeitos;
		if(num_suspeitos == 0) {
			break;
		}

		for(i = 0; i < num_suspeitos; i++) {
			cin >> prob;
			suspeitos.push_back(prob);
			copia.push_back(prob);
		}

		sort(suspeitos.rbegin(), suspeitos.rend());

		for(i = 0; i < num_suspeitos; i++) {
			if(copia[i] == suspeitos[1]) {
				cout << i+1 << endl;
				break;
			}
		}
		suspeitos.clear();
		copia.clear();
	}

	return 0;
}