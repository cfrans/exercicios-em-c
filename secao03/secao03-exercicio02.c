#include <stdio.h>

int main(){

	int min, max;
	float media;

	printf("Insira a quantidade m�nima: ");
	scanf("%d", &min);

	printf("Insira a quantidade m�xima: ");
	scanf("%d", &max);

	media = (min + max) / 2;

	printf("A quantidade m�dia de estoque � %.2f", media);

}
