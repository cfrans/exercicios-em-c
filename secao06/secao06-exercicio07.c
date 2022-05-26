#include <stdio.h>

int main(){
	int n1, n2, n3, n4, q1, q2, q3, q4;

	printf("Insira o primeiro número: ");
	scanf("%d", &n1);
	printf("Insira o segundo número: ");
	scanf("%d", &n2);
	printf("Insira o terceiro número: ");
	scanf("%d", &n3);
	printf("Insira o quarto número: ");
	scanf("%d", &n4);

	q1 = n1 * n1;
	q2 = n2 * n2;
	q3 = n3 * n3;
	q4 = n4 * n4;

	if(q3 >= 1000){
		printf("Número %d, Quadrado %d\n", n3, q3);
	}else{
		printf("Número %d, Quadrado: %d\n", n1, q1);
		printf("Número %d, Quadrado: %d\n", n2, q2);
		printf("Número %d, Quadrado: %d\n", n3, q3);
		printf("Número %d, Quadrado: %d\n", n4, q4);
	}

}
