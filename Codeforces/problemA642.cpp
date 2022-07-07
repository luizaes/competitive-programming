#include <bits/stdc++.h>

using namespace std;

int main() {

	int num_cases, cont = 0, n, m;

	cin >> num_cases;

	while(cont < num_cases) {
		cin >> n >> m;

		if(n == 1) {
			cout << "0" << endl;
		} else if(n == 2) {
			cout << m << endl;
		} else {
			cout << m*2 << endl;
		}

		cont++;
	}

	return 0;
}