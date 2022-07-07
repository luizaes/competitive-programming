#include <iostream>
#include <cstdio>

int main(){
	
	int a, b, c, diferenca = 0;

	scanf("%d %d %d", &a, &b, &c);

	if(a >= b + c) {
		diferenca = a-(b+c) +1;
	} else if(b >= a + c) {
		diferenca = b-(a+c) +1;
	} else if(c >= a + b) {
		diferenca = c-(b+a) +1;
	}

	printf("%d\n", diferenca);
	return 0;
}