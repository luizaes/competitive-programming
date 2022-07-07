#include <bits/stdc++.h>

using namespace std;

int main() {

	long long int glass, volume, number, aux, menor, dif = 0, soma = 0;

	cin >> number >> glass;
	vector<long long int> vetor;

	for(int i = 0; i < number; i++) {
		cin >> aux;
		if(i == 0) {
			menor = aux;
		} else if(menor > aux) {
			menor = aux;
		}
		soma += aux;
		vetor.push_back(aux);
	}

	if(soma < glass) {
		cout << "-1" << endl; 
	} else {
		if(soma-(number*menor) >= glass) {
			cout << menor << endl;
		} else {
			glass -= soma-(number*menor);
			dif = glass / number;

			if(glass % number > 0) {
				dif++;
			}

			cout << menor-dif << endl;
		
		}
	}

	return 0;
}