#include <stdio.h>

int main(){

	int metros, centimetros;

	printf("Insira o tamanho em metros ");
	scanf("%d", &metros);

	centimetros = metros * 100;

	printf("%d metros em cent�metros � %d cent�metros", metros, centimetros);

}
