#include <bits/stdc++.h>

using namespace std;

int main() {

  long long num_casos, cont = 0, x, n, resto, rounds = 0, cookies = 0;

	scanf("%lld", &num_casos);

	while(cont < num_casos) {
		scanf("%lld %lld", &x, &n);
    long long vetor[n];
    if( n == 1){
      printf("%lld\n", x);
    } else if(x < n) {
      for(int i = 0; i < n; i++ ){
        if(i < x){
            vetor[i] = 1;
        }else {
          vetor[i] = 0;
        }

      }
      for(int i = 0; i < n; i++) {
        if(i == n-1) {
            printf("%lld\n", vetor[i]);
        } else {
          printf("%lld ", vetor[i]);
        }
      }
    } else {
      rounds = (x-n)/(n - 1);
      for(int i = 0; i < n; i++) {
          if(x%n == 0) {
            vetor[i] = rounds+1;
          } else {
            vetor[i] = rounds+1;
          }
      }

      //printf("%lld\n", rounds);
      if(rounds % 2 == 0) {
        vetor[0] -= rounds/2;
        vetor[n-1] -= rounds/2;
      } else {
    //    printf("entrei aqui");
        vetor[0] -= ((rounds-1)/2);
        vetor[n-1] -= ((rounds-1)/2)+1;
      }
      cookies = x - n - rounds *(n-1);
      //printf("%lld\n", cookies);
      if((x-n)%(n-1) != 0) {
          if(rounds % 2 == 0) {
            for(int i = n-2; cookies > 0; i--) {
              vetor[i]++;
              cookies--;
            }
          } else {
            for(int i = 1; cookies > 0; i++) {
              vetor[i]++;
              cookies--;
            }
          }
      }

      for(int i = 0; i < n; i++) {
        if(i == n-1) {
            printf("%lld\n", vetor[i]);
        } else {
          printf("%lld ", vetor[i]);
        }
      }
    }


		cont++;
	}

    return 0;
}
