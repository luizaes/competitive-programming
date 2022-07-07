/* Iniciante, 2702 - Escolha Difícil */
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	int df, db, dm, rf, rb, rm, resultado = 0;

	cin >> df >> db >> dm;
	cin >> rf >> rb >> rm;

	if(df < rf) {
		resultado += rf-df;
	}
	if(db < rb) {
		resultado += rb-db;
	}
	if(dm < rm) {
		resultado += rm-dm;
	}

	cout << resultado << endl;

	return 0;
}
