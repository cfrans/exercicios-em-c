#include <stdio.h>

int main(){
	float excesso, multa, peso;

	printf("Insira o peso dos peixes: ");
	scanf("%f", &peso);

	if(peso > 50){
		excesso = (peso - 50);
		multa = (excesso * 4);
		printf("O peso excedido foi de %.2f kg\n", excesso);
		printf("A multa a ser paga é de R$ %.2f", multa);
	}else{
		printf("Nenhuma multa deverá ser paga.");
	}
}
