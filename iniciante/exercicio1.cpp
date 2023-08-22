#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;
	printf("Digite um número: ");
	scanf("%d", &num);
	printf("O número Digitado foi : %d", num);
	
	
	
	
}

	
