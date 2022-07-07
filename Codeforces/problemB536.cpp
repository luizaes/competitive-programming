#include <bits/stdc++.h>

using namespace std;

int main() {

	long long int n, aux, soma = 0;
	vector<long long int> numbers;

	cin >> n;

	for(long long int i = 0; i < n; i++) {
		cin >> aux;
		numbers.push_back(aux);
	}

	sort(numbers.begin(), numbers.end());

	for(long long int i = 0; i < n/2; i++) {
		soma += pow(numbers[i]+numbers[n-i-1], 2);
	}

	cout << soma << endl;

	return 0;
}