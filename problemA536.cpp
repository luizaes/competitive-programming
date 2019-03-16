#include <bits/stdc++.h>

using namespace std;

int main() {

	int size, crosses = 0;

	cin >> size;
	char matrix[size][size];

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			cin >> matrix[i][j];
		}
	}

	for(int i = 1; i < size-1; i++) {
		for(int j = 1; j < size-1; j++) {
			if(matrix[i][j] == matrix[i-1][j-1] && matrix[i-1][j-1] == matrix[i-1][j+1] && matrix[i-1][j+1] == matrix[i+1][j-1] && matrix[i+1][j-1] == matrix[i+1][j+1] && matrix[i+1][j+1] == 'X') {
				crosses++;
			}
		}
	}	

	cout << crosses << endl;

	return 0;
}