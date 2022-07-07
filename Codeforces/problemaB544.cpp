#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k, aux, resultado = 0;

	int vetor[100] = {0};

	cin >> n >> k ;

	for(int i = 0; i < n; i++){
		cin >> aux;
		vetor[aux%k]++;  
	}

	resultado = vetor[0]/2;

	if(k % 2 == 0) {
		resultado += vetor[k/2] / 2;
	}

	for(int i = 1; i < (k+1)/2; i++){
	
		resultado += min(vetor[i], vetor[k-i]);
	
	}
	cout << resultado*2 << endl;


	return 0;
}