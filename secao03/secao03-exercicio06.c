#include <stdio.h>

int main(){

	float valor_hora, valor_total;
	int horas;

	printf("Insira a quantidade de horas trabalhadas no mês: ");
	scanf("%d", &horas);

	printf("Insira o valor que você recebe por hora: ");
	scanf("%f", &valor_hora);

	valor_total = (horas * valor_hora);

	printf("O total do salário no mês é de R$ %.2f", valor_total);

}
