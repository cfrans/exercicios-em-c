#include <stdio.h>

int main(){
	int n;

	printf("Informe um n?mero: ");
	scanf("%d", &n);

	if(n > 100){
		printf("%d", n);
	}else{
		n = 0;
		printf("%d", n);
	}
}
