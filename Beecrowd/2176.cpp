#include <iostream>

using namespace std;

int main() {

	string entrada;
	int uns = 0;

	cin >> entrada;

	for(int i = 0; i < entrada.size(); i++) {
		if(entrada[i] == '1') {
			uns++;
		}
	}

	if(uns % 2 == 0) {
		cout << entrada+'0' << endl;
	} else {
		cout << entrada+'1' << endl;
	}

	return 0;
}