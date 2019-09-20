#include <bits/stdc++.h>

using namespace std;

int main() {

	int num, aux, carlos;
	bool encontreiMaior = false;

	cin >> num;

	for(int i = 0; i < num; i++) {
		cin >> aux;
		if(i == 0) {
			carlos = aux;
		} else {
			if(aux > carlos) {
				encontreiMaior = true;
			}
		}
	}

	if(encontreiMaior) {
		cout << "N" << endl;
	} else {
		cout << "S" << endl;
	}

	return 0;
}