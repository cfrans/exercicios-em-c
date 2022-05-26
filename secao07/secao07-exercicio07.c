#include <stdio.h>

int main(){
	int total = 0, sit1 = 0, sit2 = 0, sit3 = 0, sit4 = 0, id, defeito;
	float p1, p2, p3, p4;

	printf("Digite o ID do mouse (ou 0 para encerrar): ");
	scanf("%d", &id);

	while(id != 0){
		printf("Identifique o defeito:\n");
		printf("1 - Necessita da esfera\n");
		printf("2 - Necessita de limpeza\n");
		printf("3 - Necessita troca do cabo ou conector\n");
		printf("4 - Quebrado ou inutilizado\n");
		printf("Insira o defeito: ");
		scanf("%d", &defeito);

		if(defeito < 5 && defeito > 0){ //Código adicionado para impossibilitar um defeito não existente. Não foi solicitado no exercício.
		if(defeito == 1){
			sit1 = sit1 + 1;
		}if(defeito == 2){
			sit2 = sit2 + 1;
		}if(defeito == 3){
			sit3 = sit3 + 1;
		}if(defeito == 4){
			sit4 = sit4 + 1;
		}
		total = total + 1;
		printf("Digite o ID do mouse (ou 0 para encerrar): ");
		scanf("%d", &id);
	}else{
		printf("Defeito desconhecido, informe o mesmo novamente.\n");
	}
	}

	// o (float) abaixo é chamado de CAST. O mesmo converte o tipo da variável, que neste caso antes era int.
	p1 = ((float)sit1 / (float)total * 100.0);
	p2 = ((float)sit2 / (float)total * 100.0);
	p3 = ((float)sit3 / (float)total * 100.0);
	p4 = ((float)sit4 / (float)total * 100.0);

	printf("Quantidade total de mouses: %d\n", total);
	printf("Situação \t\t\t\tQuantidade \t\tPercentual\n");
	printf("1 - Necessita da esfera: \t\t\t%d \t\t%.2f%%\n", sit1, p1);
	printf("2 - Necessita de limpeza: \t\t\t%d \t\t%.2f%%\n", sit2, p2);
	printf("3 - Necessita troca do cabo ou conector: \t%d \t\t%.2f%%\n", sit3, p3);
	printf("4 - Quebrado ou inutilizado: \t\t\t%d \t\t%.2f%%\n", sit4, p4);

}
