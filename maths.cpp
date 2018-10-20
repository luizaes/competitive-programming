#include <vector>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    
    string linha;
    vector<int> numbers;

    getline(cin, linha);
    
    for(int i = 0; i < linha.length(); i++) {
	if(linha[i] != '+') {
		numbers.push_back(linha[i]-48);
	}
    }

    sort(numbers.begin(), numbers.end());

    for(int i = 0; i < numbers.size(); i++) {
	if(i == numbers.size()-1) {
        	cout << numbers[i] << endl;	
	} else {
		cout << numbers[i] << "+";    
	}
    }

    return 0;
}
