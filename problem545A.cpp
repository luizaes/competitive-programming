#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, aux, longest = 0, ultimo = 0, match = 0, maior = 0;
	vector<int> sushi;
	vector<int> sequences;

	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> aux;
		sushi.push_back(aux);
	}

	sequences.push_back(2);

	ultimo = sushi[0];
	longest++;
	for(int i = 1; i < n; i++) {
		if(ultimo == sushi[i]) {
			longest++;
		} else {
			match = longest;
			ultimo = sushi[i];
			for(int j = i; j < n; j++) {
				if(ultimo == sushi[j]) {
					match--;
				} else {
					sequences.push_back((longest-match)*2);
					longest = 1;
					break;
				}
				if(match == 0) {
					sequences.push_back(longest*2);
					longest = 1;
					break;
				}
			}
			if(match != 0) {
				sequences.push_back((longest-match)*2);
			}
			longest = 1;
		}
		ultimo = sushi[i];
	}

	for(int i = 0; i < sequences.size(); i++) {
		if(sequences[maior] < sequences[i]) {
			maior = i;
		}
	}

	cout << sequences[maior] << endl;

	return 0;
}