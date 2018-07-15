/* Strings, 1241 - Encaixa ou Não 2 */
#include <iostream>
#include <string>

using namespace std;

int main() {

	int num_casos, cont = 0;
	string s1, s2;

	cin >> num_casos;
	while(cont < num_casos){
		
		cin >> s1 >> s2;
		if(s2.size() > s1.size()) {
			cout << "nao encaixa" << endl;
		} else {
			if (s2.compare(s1.substr(s1.size()-s2.size(), s1.size())) == 0) {
		    	cout << "encaixa" << endl;
			} else {
				cout << "nao encaixa" << endl;
			}
		}	

		cont++;
	}

	return 0;
}