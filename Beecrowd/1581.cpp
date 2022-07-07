/* Strings, 1581 - Conversa Internacional */
#include <iostream>

using namespace std;

int main() {

	int num_casos, cont = 0, pessoas, i;
	string lingua_falada, lingua;
	bool dif = false;
	char c; 

	cin >> num_casos;

	while(cont < num_casos) {

		cin >> pessoas;
		cin.get(c);

		for(i = 0; i < pessoas; i++) {
			getline(cin, lingua);

			if(i == 0) {
				lingua_falada = lingua;
			} else if(lingua.compare(lingua_falada) != 0) {
				dif = true;
			}
		}

		if(dif) {
			cout << "ingles" << endl;
		} else {
			cout << lingua_falada << endl;
		}
		dif = false;
		cont++;
	}

	return 0;
}