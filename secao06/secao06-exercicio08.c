#include <stdio.h>

int main(){
	int n1;

	printf("Informe um n�mero: ");
	scanf("%d", &n1);

	if(n1 % 2 == 0){
		if(n1 > 0){
			printf("O n�mero %d � par e positivo", n1);
		}else{
			printf("O n�mero %d � par e negativo", n1);
		}

	}else{
		if(n1 > 0){
			printf("O n�mero %d � �mpar e positivo", n1);
		}else{
			printf("O n�mero %d � �mpar e negativo", n1);
		}
	}
}
