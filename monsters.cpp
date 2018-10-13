#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int qtd_num, result = 0, maior = 0, pos, aux, index, aux2, aux_numberspos;


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
			pos = qtd_num-1;
			aux2 = qtd_num;
			maior = qtd_num;
			int indexes[qtd_num+1];
			
			for(int j = 0; j < qtd_num; j++){
				indexes[numbers[j]]=j;			
			}

			for(int i = 0; i < aux2; i++) {
				if(indexes[maior] != pos) {
					aux = numbers[indexes[maior]];
					numbers[indexes[maior]] = numbers[pos];
					aux_numberspos = numbers[pos];
					numbers[pos] = aux;
					
					aux = indexes[aux_numberspos];
					indexes[aux_numberspos] = indexes[maior];
					indexes[maior] = aux;

					pos--;
					result++;
					maior--;
					
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
