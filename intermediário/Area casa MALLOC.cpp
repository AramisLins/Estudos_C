/*
Fa�a um algoritmo para calcular a �rea total de uma resid�ncia (por exemplo, sala, cozinha,
banheiro, quartos, �rea de servi�o, quintal garagem, etc.). O programa dever� capturar do
teclado o nome do c�modo e a largura e o comprimento deste, armazenar estes dados em uma estrutura
do tipo REGISTRO (typedef struct). Em seguida, dever� calcular a �rea do c�modo lido e armazenar o
resultado junto com os dados do respectivo c�modo. Perguntar ao usu�rio se deseja continuar
calculando a �rea de um outro c�modo. A casa pode ter at� 5 c�modos. Caso o usu�rio responda "N�O",
o programa dever� recuperar e apresentar todos valores gravados na estrutura e o valor da �rea total da resid�ncia.
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

	// aloca �rea para os c�modos, cuja quantidade � informada em tempo real
	printf("Informe quantos comodos tem sua casa: ");
	scanf("%d", &quantos_comodos);
	p_CMD = (COMODO *) malloc(sizeof(COMODO) * quantos_comodos);
	
	// aloca a �rea da resid�ncia
	p_CASA = (RESIDENCIA *) malloc(sizeof(RESIDENCIA));
	
	// associa a �rea dos c�modos � �rea da casa
	p_CASA->p_COMOD = p_CMD;
	
	// coleta os dados dos c�modos a partir do teclado
	for (i = 0; i < quantos_comodos; i++) {
		printf("Informe os dados do %do. c�modo: ", i + 1);
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
	
