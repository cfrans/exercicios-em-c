#include <stdio.h>

int main(){

	float valor_hora, valor_total;
	int horas;

	printf("Insira a quantidade de horas trabalhadas no m�s: ");
	scanf("%d", &horas);

	printf("Insira o valor que voc� recebe por hora: ");
	scanf("%f", &valor_hora);

	valor_total = (horas * valor_hora);

	printf("O total do sal�rio no m�s � de R$ %.2f", valor_total);

}
