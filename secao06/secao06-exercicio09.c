#include <stdio.h>

int main (){
	float poluicao;

	printf("Informe o �ndice de polui��o medido: ");
	scanf("%f", &poluicao);

	if(poluicao >= 0.3 && poluicao < 0.4){
		printf("Grupo 1 suspender atividades.");
	}
	else if(poluicao >= 0.4 && poluicao < 0.5){
		printf("Grupo 1 e 2 suspender atividades.");
	}
	else if(poluicao >= 0.5){
		printf("Todos os grupos suspender atividades.");
	}
	else{
		printf("N�veis de polui��o aceit�veis.");
	}
}
