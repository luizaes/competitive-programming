#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {

	string linha;
	int i, contador = 0;
	char ultimaLetra;
	bool sequencia = false; 

	while(getline(cin, linha)) {
		contador = 0;
		sequencia = false;
		for(i = 0; linha[i] != '\0'; i++) {
			if(i == 0) {
				ultimaLetra = tolower(linha[i]);
			} else if(linha[i-1] == ' ') {
				if(tolower(linha[i]) == ultimaLetra && sequencia == false) {
					contador++;
					sequencia = true;
				} else if(tolower(linha[i]) != ultimaLetra) {
					sequencia = false;
					ultimaLetra = tolower(linha[i]);
				}
			}
		}
		cout << contador << endl;
	}

	return 0;
}