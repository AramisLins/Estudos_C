#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0, "portuguese");
	int menu ;
	printf("Digite a quest�o desejada da aula 05/09: ");
	scanf("%d", &menu);
	
	if(menu == 1){
		/* 
		Para efetuar o c�lculo da �rea de uma circunfer�ncia � necess�rio conhecer a f�rmula que executa este c�lculo, que �:
		A = pi R2
		onde A � a vari�vel que conter� o resultado do c�lculo, pi representa a constante 3,14159 e R � o raio da circunfer�ncia.
		Escrever um programa em C para resolver este problema e apresentar o resultado na tela.
		*/
		float area , raio;
		float pi = 3.14159;
		printf("Digite o valor do raio: ");
		scanf("%f", &raio);
		area = pi * (raio * raio);
		printf("%f", area);
	}
	else if(menu ==2){
		/*
		Construir um programa em C que efetue o c�lculo do sal�rio l�quido de um oper�rio.
		Ser� necess�rio conhecer o valor da hora de trabalho, n�mero de horas trabalhadas no m�s e percentual de desconto de INSS.
		Deve-se saber primeiro o valor do sal�rio bruto, para ent�o calcular o valor do desconto e finalmente o valor do sal�rio l�quido
		*/
		int qtdHoras;
		float horaDeTrabalho, desconto, salBruto, salLiquido, percentual;
		printf("Digite a quanditdade de horas trabalhadas: ");
		scanf("%d", &qtdHoras);
		printf("Digite o valor da hora de trabalho: ");
		scanf("%f", &horaDeTrabalho);
		printf("Digite o percentual do INSS: ");
		scanf("%f", &percentual);
		salBruto = qtdHoras * horaDeTrabalho;
		desconto = salBruto * percentual / 100 ;
		salLiquido = salBruto - desconto;
		printf("O salario liquido �: %.2f", salLiquido);
	}
	else if(menu ==3){
		/*
		Construa um programa em C que leia o pre�o de um Im�vel e apresente a mensagem:
		�Em promo��o�, caso o pre�o seja menor ou igual a R$ 80.000,00.
		Caso contr�rio, deve apresentar a mensagem: �Pre�o Normal�. 
		*/
		float imovel;
		printf("Digite o valor do imovel: ");
		scanf("%f", &imovel);
		if(imovel < 80.000)
			printf("Em promo");
		else
			printf("Pre�o Normal");
	}
	else if(menu == 4){
		/*
		 Num determinado Estado, para transfer�ncias de ve�culos, o DETRAN cobra uma taxa de 1% para carros fabricados antes de 1990 e uma taxa de 1.5% para 
		 os fabricados de 1990 em diante, taxa que incide sobre o valor de tabela do carro.
		Escreva um programa em C que l� o ano e o valor do carro e a seguir calcula e apresenta o valor do imposto a ser pago.
		*/
		
		int ano;
		float valor_carro, valor_imposto;
		printf("Digite o ano do carro: ");
		scanf("%d", &ano);
		printf("Digite o valor do carro: ");
		scanf("%f", &valor_carro);
		if(ano < 1990){
			valor_imposto = valor_carro * 0.1;
			printf("O valor do imposto �: %.2f",valor_imposto);
		}
		else{
			valor_imposto = valor_carro * 0.15;
			printf("O valor do imposto � : %.2f", valor_imposto);
		}
		
		
		
		
		
		
		
	}

}
