#include <stdio.h>

int main(){
	int c;
	float n, e = 0, total;

	printf("Insira seu código: ");
	scanf("%d", &c);
	printf("Insira o número de horas trabalhadas: ");
	scanf("%f", &n);

	if(n > 50){
		e = (n - 50) * 20.00;
		n = (50 * 10.00);
		total = (n + e);
		printf("O salário a ser recebido é de R$ %.2f \n", n);
		printf("O salário extra a ser recebido é de R$ %.2f \n", e);
		printf("Totalizando R$ %.2f a receber.", total);
	}else{
		n = (n * 10);
		printf("O salário a ser recebido é de R$ %.2f \n", n);
		printf("Não há salário extra a ser recebido");
	}
}
