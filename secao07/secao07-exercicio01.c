#include <stdio.h>

int main(){
	int n, maior = 0;

	printf("Informe um número: ");
	scanf("%d", &n);

	while(n != 0){
		if(n > maior){
			maior = n;
		};
		printf("Informe um número: ");
		scanf("%d", &n);
	}
	printf("O maior número é %d", maior);
}
