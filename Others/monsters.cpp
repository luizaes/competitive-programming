#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int qtd_num, result = 0, maior = 0, pos, aux, index, aux2, aux_numberspos, contTamanhoCiclo = 0;


	while(scanf("%d", &qtd_num) != EOF) {
		int numbers[qtd_num];
		index = 1;
		for(int i = 0; i < qtd_num; i++) {
			//cin >> numbers[i];
			scanf("%d", &numbers[i]);
		}

		if(qtd_num == 1) {
			result = 0;
		} else {
			result = 0;
			contTamanhoCiclo = 0;
			int indexes[qtd_num+1];
			int visitados[qtd_num+1] = {0};
			
			for(int j = 0; j < qtd_num; j++){
				indexes[numbers[j]]=j;			
			}

			for(int i = 0; i < qtd_num; i++) {
				if(i+1 != numbers[i] && visitados[numbers[i]] != 1) {
					//contTamanhoCiclo++;
					int k = numbers[i];
					while(visitados[k] != 1) {
						visitados[k] = 1;
						k = numbers[k-1];
						contTamanhoCiclo++;
					}
					result += contTamanhoCiclo-1;
					contTamanhoCiclo = 0;
				}	
			}
		/*for(int i=0; i < qtd_num; i++){
			cout << indexes[i+1] << endl;
		}*/		
		}
		
		//cout << endl;	
		//cout << result << endl;
		printf("%d\n", result);
	}	

	return 0;
}
