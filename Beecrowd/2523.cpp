#include <iostream>
 
using namespace std;
 
int main() {
 
   	int num_posicoes, posicao;
   	string entrada;
   
   	while(cin >> entrada) {
   		cin >> num_posicoes;
   		for(int i = 0; i < num_posicoes; i++) {
   			cin >> posicao;
   			cout << entrada[posicao-1];
   		}
   		cout << endl;
   	}
 
    return 0;
}