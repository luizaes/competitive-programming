#include <bits/stdc++.h>

using namespace std;

int main() {

	int length, aux;
	vector<int> array;

	cin >> length;

	for(int i = 0; i < length; i++) {
		cin >> aux;
		array.push_back(aux);
	}

	sort(array.begin(), array.end());

	if(array[length-1] - array[length-2] > array[1] - array[0]) {
		array.erase(array.begin()+length-1);
		length--;
	} else {
		array.erase(array.begin());
		length--;
	}

	cout << array[length-1] - array[0] << endl;

	return 0;
}