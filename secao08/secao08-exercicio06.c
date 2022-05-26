#include <stdio.h>

int main(){
	int codigo;
	float vetor[5];

	printf("0 - Encerra o programa\n");
	printf("1 - Exibir os valores na ordem direta\n");
	printf("2 - Exibir os valores na ordem inversa\n");
	printf("Digite o código: ");
	scanf("%d", &codigo);

	if(codigo != 0){
		for(int i = 0; i < 5; i++){
			printf("Digite um número real: ");
			scanf("%f", &vetor[i]);
		}if(codigo == 1){
			for(int i = 0; i < 5; i++){
				printf("%.2f\n", vetor[i]);
			}
		}if(codigo == 2){
			for(int i = 4; i >= 0; i--){
				printf("%.2f\n", vetor[i]);
			}
		}
	}
}
