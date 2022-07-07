#include <bits/stdc++.h>

using namespace std;

int main() {

	int num_cases, cont = 0, size;
	long long int sum;

	cin >> num_cases;

	while(cont < num_cases) {
		cin >> size;

		sum = 0;

		for(long long int i = 1; i <= size/2; i++) {
			sum += 8*i*i;
		}

		cout << sum << endl;

		cont++;
	}

	return 0;
}