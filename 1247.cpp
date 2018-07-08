/* Matemática, 1247 - Guarda Costeira */
#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double d, vf, vg, tf, tg;

	while(cin >> d >> vf >> vg) {
		tf = 12/vf;
		tg = sqrt(pow(d, 2) + pow(12, 2))/vg;

		if(tg <= tf) {
			cout << "S" << endl;
		} else {
			cout << "N" << endl;
		}
	}

	return 0;
}