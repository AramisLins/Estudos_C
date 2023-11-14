/*
Faça um algoritmo para calcular a área total de uma residência (por exemplo, sala, cozinha,
banheiro, quartos, área de serviço, quintal garagem, etc.). O programa deverá capturar do
teclado o nome do cômodo e a largura e o comprimento deste, armazenar estes dados em uma estrutura
do tipo REGISTRO (typedef struct). Em seguida, deverá calcular a área do cômodo lido e armazenar o
resultado junto com os dados do respectivo cômodo. Perguntar ao usuário se deseja continuar
calculando a área de um outro cômodo. A casa pode ter até 5 cômodos. Caso o usuário responda "NÃO",
o programa deverá recuperar e apresentar todos valores gravados na estrutura e o valor da área total da residência.
*/
#include	<stdio.h>
#include	<locale.h>
#include	<string.h>
#include	<stdlib.h>

typedef struct cmd {
	char	nome[124];
	float	ld1;
	float	ld2;
	float	area_comodo;
} COMODO;

typedef struct casa {
	COMODO *	p_COMOD;
	float		area_total;
	int			qtd_COMODOS;
} RESIDENCIA;

int	main()
{
	setlocale(0, "Portuguese");
	
	int				quantos_comodos, i;
	COMODO *		p_CMD;
	RESIDENCIA *	p_CASA;

	// aloca área para os cômodos, cuja quantidade é informada em tempo real
	printf("Informe quantos comodos tem sua casa: ");
	scanf("%d", &quantos_comodos);
	p_CMD = (COMODO *) malloc(sizeof(COMODO) * quantos_comodos);
	
	// aloca a área da residência
	p_CASA = (RESIDENCIA *) malloc(sizeof(RESIDENCIA));
	
	// associa a área dos cômodos à área da casa
	p_CASA->p_COMOD = p_CMD;
	
	// coleta os dados dos cômodos a partir do teclado
	for (i = 0; i < quantos_comodos; i++) {
		printf("Informe os dados do %do. cômodo: ", i + 1);
		scanf("%s %f %f", 	&p_CASA->p_COMOD[i].nome,
							&p_CASA->p_COMOD[i].ld1,
							&p_CASA->p_COMOD[i].ld2);
	}
	
	// mostra os dados coletados
	for (i = 0; i < quantos_comodos; i++) {
		printf("%s %f %f\n", 	p_CASA->p_COMOD[i].nome,
								p_CASA->p_COMOD[i].ld1,
								p_CASA->p_COMOD[i].ld2);
	}
}
	
