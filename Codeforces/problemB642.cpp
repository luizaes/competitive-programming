#include <bits/stdc++.h>

using namespace std;

bool invert(int a, int b) {
	return a > b;
}

int main() {

	int num_cases, cont = 0, size, moves, aux;
	vector<int> a, b;

	cin >> num_cases;

	while(cont < num_cases) {
		cin >> size >> moves;

		for(int i = 0; i < size; i++) {
			cin >> aux;
			a.push_back(aux);
		}

		for(int i = 0; i < size; i++) {
			cin >> aux;
			b.push_back(aux);
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end(), invert);

		for(int i = 0; i < moves; i++) {
			if(a[i] >= b[i]) {
				break;
			}

			aux = a[i];
			a[i] = b[i];
			b[i] = a[i];
		}

		cout << accumulate(a.begin(), a.end(), 0) << endl;

		a.clear();
		b.clear();

		cont++;
	}

	return 0;
}