#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	printf("O n�mero Digitado foi : %d", num);
	
	
	
	
}

	
