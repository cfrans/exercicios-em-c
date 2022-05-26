#include <stdio.h>

int main(){

	int min, max;
	float media;

	printf("Insira a quantidade mínima: ");
	scanf("%d", &min);

	printf("Insira a quantidade máxima: ");
	scanf("%d", &max);

	media = (min + max) / 2;

	printf("A quantidade média de estoque é %.2f", media);

}
