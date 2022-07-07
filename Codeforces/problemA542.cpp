#include <bits/stdc++.h>

using namespace std;

int main() {

	int length, aux;
	double metade = 0, qtdZeros = 0, qtdNegativos = 0, qtdPositivos = 0;
	vector<int> numbers;

	cin >> length;

	for(int i = 0; i < length; i++) {
		cin >> aux;
		numbers.push_back(aux);
		if(aux == 0) {
			qtdZeros++;
		} else if(aux > 0) {
			qtdPositivos++;
		} else if(aux < 0) {
			qtdNegativos++;
		}
	}

	metade = (double) length /2;

	if(length == 1) {
		if(numbers[0] > 0) {
			cout << "1" << endl;
		} else if(numbers[0] < 0) {
			cout << "-1" << endl;
		} else if(numbers[0] == 0) {
			cout << "0" << endl;
		}
	} else {
		if(qtdZeros > metade) {
			cout << "0" << endl;
		} else {
			if(qtdNegativos >= qtdPositivos && qtdNegativos >= metade) {
				cout << "-1" << endl;
			} else if(qtdPositivos >= qtdNegativos && qtdPositivos >= metade) {
				cout << "1" << endl;
			} else {
				cout << "0" << endl;
			}
		}	
	}

	return 0;
}