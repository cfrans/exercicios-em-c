#include <stdio.h>

int main(){
	int c;
	float n, e = 0, total;

	printf("Insira seu c�digo: ");
	scanf("%d", &c);
	printf("Insira o n�mero de horas trabalhadas: ");
	scanf("%f", &n);

	if(n > 50){
		e = (n - 50) * 20.00;
		n = (50 * 10.00);
		total = (n + e);
		printf("O sal�rio a ser recebido � de R$ %.2f \n", n);
		printf("O sal�rio extra a ser recebido � de R$ %.2f \n", e);
		printf("Totalizando R$ %.2f a receber.", total);
	}else{
		n = (n * 10);
		printf("O sal�rio a ser recebido � de R$ %.2f \n", n);
		printf("N�o h� sal�rio extra a ser recebido");
	}
}
