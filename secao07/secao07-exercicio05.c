#include <stdio.h>
#include <string.h>

int main(){
	char nome[100], senha[100];

	printf("Informe o nome: ");
	fgets( nome, 100, stdin);
	printf("Informe a senha: ");
	fgets( senha, 100, stdin);

	while(!strcmp(nome, senha)){ //o !strcmp faz uma comparação entre as strings informadas.
		printf("A senha não pode ser igual ao nome.\n");
		printf("Informe o nome: ");
		fgets( nome, 100, stdin);
		printf("Informe a senha: ");
		fgets( senha, 100, stdin);
}
}
