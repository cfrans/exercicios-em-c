#include <stdio.h>

int main(){
	int numero, p = 0, i = 0;

	printf("Informe um número ");
	scanf("%d", &numero);

	if(numero % 2 == 0){
		p = numero;
	}else{
		i = numero;
	}

	printf("%d\n", p);
	printf("%d\n", i);

}
