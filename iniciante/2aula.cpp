#include <stdio.h>
#include <locale.h>

int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	printf("Estudos do dia 22\\08\\23\n\n");
	int opc = 0;
	printf("MENU DE ESCOLHAS\n");
	printf("Digite a op��o desejada\n1- barra rodando\n2- filas\nEscolha: ");
	scanf("%d", &opc);
	
	while(opc == 1){
		printf("|\b");
		printf("/\b");
		printf("-\b");
		printf("\\\b");
	}


//	Relembrando o inicio de printf, scanf e while
	int num = 0;
	int idade = 0;
	float salario = 0.0;
	printf("SISTEMA DE FILAS DO CANGA�O DEV\n");
	printf("DIgite sua idade:");
	scanf("%d", &idade);
	
	while(idade <= 10){
		printf("Idade n�o permitida, procure um respons�vel\n");
		printf("Achou ?\nSe sim digite sua idade:");
		scanf("%d", &idade);
	}
	
	printf("Digite seu n�mero na fila:");
	scanf("%d", &num);
	printf("Digite seu sal�rio: ");
	scanf("%f", &salario);
	
	printf("Seu n�mero � %d e seu sal�rio esta de %.3f\n", num, salario*2);
	printf("--------------------------------\n");
	printf("Obrigado pela prefer�ncia!");
	
}


