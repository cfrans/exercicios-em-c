#include <stdio.h>

int main(){
	int valor, a, b;

	printf("Informe um n�mero: ");
	scanf("%d", &valor);

	if(valor > 0){
		a = valor;
		printf("O n�mero %d � positivo.", a);
	}else{
		b = valor;
		printf("O n�mero %d � negativo.", b);
	}
}
