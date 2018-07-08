/* Iniciante, 2163 - O Despertar da Força */
#include <iostream>

using namespace std;

int main() {
	
	int linha, coluna, i, j, k, m, l = 0, c = 0;
	bool achei = false;

	cin >> linha >> coluna;
	int mapa[linha][coluna];

	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			cin >> mapa[i][j];
		}
	}

	for(i = 1; i < linha-1; i++) {
		for(j = 1; j < coluna-1; j++) {
			if(mapa[i][j] == 42) {
				if(mapa[i-1][j] == 7 && mapa[i+1][j] == 7 && mapa[i][j-1] == 7 && mapa[i][j+1] == 7 && mapa[i-1][j-1] == 7 && mapa[i+1][j+1] == 7 && mapa[i+1][j-1] == 7 && mapa[i-1][j+1] == 7) {
					achei = true;
					l = i+1;
					c = j+1;
					break;
				}
			}
		}
		if(achei) {
			break;
		}
	}

	cout << l << " " << c << endl;

	return 0;
}