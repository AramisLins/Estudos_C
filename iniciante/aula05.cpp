#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0, "portuguese");
	int menu ;
	printf("Digite a questão desejada da aula 05/09: ");
	scanf("%d", &menu);
	
	if(menu == 1){
		/* 
		Para efetuar o cálculo da área de uma circunferência é necessário conhecer a fórmula que executa este cálculo, que é:
		A = pi R2
		onde A é a variável que conterá o resultado do cálculo, pi representa a constante 3,14159 e R é o raio da circunferência.
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
		Construir um programa em C que efetue o cálculo do salário líquido de um operário.
		Será necessário conhecer o valor da hora de trabalho, número de horas trabalhadas no mês e percentual de desconto de INSS.
		Deve-se saber primeiro o valor do salário bruto, para então calcular o valor do desconto e finalmente o valor do salário líquido
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
		printf("O salario liquido é: %.2f", salLiquido);
	}
	else if(menu ==3){
		/*
		Construa um programa em C que leia o preço de um Imóvel e apresente a mensagem:
		“Em promoção”, caso o preço seja menor ou igual a R$ 80.000,00.
		Caso contrário, deve apresentar a mensagem: “Preço Normal”. 
		*/
		float imovel;
		printf("Digite o valor do imovel: ");
		scanf("%f", &imovel);
		if(imovel < 80.000)
			printf("Em promo");
		else
			printf("Preço Normal");
	}
	else if(menu == 4){
		/*
		 Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros fabricados antes de 1990 e uma taxa de 1.5% para 
		 os fabricados de 1990 em diante, taxa que incide sobre o valor de tabela do carro.
		Escreva um programa em C que lê o ano e o valor do carro e a seguir calcula e apresenta o valor do imposto a ser pago.
		*/
		
		int ano;
		float valor_carro, valor_imposto;
		printf("Digite o ano do carro: ");
		scanf("%d", &ano);
		printf("Digite o valor do carro: ");
		scanf("%f", &valor_carro);
		if(ano < 1990){
			valor_imposto = valor_carro * 0.1;
			printf("O valor do imposto é: %.2f",valor_imposto);
		}
		else{
			valor_imposto = valor_carro * 0.15;
			printf("O valor do imposto é : %.2f", valor_imposto);
		}
		
		
		
		
		
		
		
	}

}
