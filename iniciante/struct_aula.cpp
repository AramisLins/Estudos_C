/*
union -  aproveita os mesmos bytes para guardar coisas diferentes
ex :
union ABC {
	char x;
	float y;
} 

enumeration - apelido numerico pra nomes
ex: 
enum estado_civil{
	casada = 1,
	solteira = 2 
};

estrutura -  armazenar varios tipos de variáveis

struct exemplo{
	int exemplo1;
	float exemplo2;
};

*/


#include <stdio.h>
#include <locale.h>

struct infoLoja{
	char nome_Loja[100];
	char cidade[100];
	float faturamentoMensal;
};


int main(){
	struct infoLoja informacoes;
	
	printf("Digite o nome da loja: ");
	scanf("%[ -~]", &informacoes.nome_Loja);
	getchar();
	
	printf("Digite a cidade da loja: ");
	scanf("%[ -~]", &informacoes.cidade);
	getchar();
	
	printf("Digite o faturamento mensal: ");
	scanf("%f", &informacoes.faturamentoMensal);
	
	printf("%s nome; %s cidade; %.2f valor", informacoes.nome_Loja, informacoes.cidade, informacoes.faturamentoMensal);
}














