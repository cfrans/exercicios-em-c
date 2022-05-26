#include <stdio.h>
#include <ctype.h> // permite usar o tolower que transforma o input em minusculo.

int main(){

	float altura, peso_ideal;
	char sexo;

	printf("Informe sua altura: ");
	scanf("%f", &altura);
	gets(stdin); // foi ignorado o aviso de função perigosa por orientação do professor.
	printf("Informe seu sexo (m ou f): ");
	scanf("%c", &sexo);

	if(tolower(sexo) == 'm'){
		peso_ideal = (72.7 * altura) - 58;
		printf("Seu peso ideal é de %.2f kg.", peso_ideal);
	}
	if(tolower(sexo) == 'f'){
		peso_ideal = (62.1 * altura) - 44.7;
		printf("Seu peso ideal é de %.2f kg.", peso_ideal);
	}
	if(tolower(sexo) != 'm' && tolower(sexo) != 'f'){
		printf("Sexo não reconhecido. \n");
	}
}
