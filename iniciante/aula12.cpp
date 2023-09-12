#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(0, "portuguese");
	int menu;
	
	printf("Aula do dia 12 de Setembro !\n");
	printf("Digite a opção desejada : ");
	scanf("%d", &menu);
	
	
	
	if( menu == 1){
		/*Faça um programa que leia duas notas e calcule a média destas notas e apresente o resultado. Repita para três alunos.	*/
		float nota1, nota2, media;
		for(int i = 1; i < 4; i++){
			
			printf("Digite suas 2 notas aluno %d: ", i);
			scanf("%f %f", &nota1, &nota2);
			media = (nota1 + nota2) / 2;
			printf("Aluno %d ficou com media : %.2f\n", i, media);
		}
	
		
		
	}
	else if( menu == 2){
		
		/*
		Faça um programa que calcule a média de duas notas.
		Ao final dos cálculos pergunte ao usuário se ele quer realizar um novo cálculo.
		Se a resposta for 's' repita, para qualquer outra resposta saia do programa.
		*/
		float nota1, nota2, media;
		char resposta;
		printf("Digite suas 2 notas: ");
		scanf("%f %f", &nota1, &nota2);
		media = (nota1 + nota2) / 2;
		printf("Deseja realizar um novo calculo?\n S ou N ? ");
		scanf("%s", &resposta);
		while(resposta == 's'){
			printf("Digite suas 2 notas: ");
			scanf("%f %f", &nota1, &nota2);
			media = (nota1 + nota2) / 2;
			printf("Deseja realizar um novo calculo?\n S ou N ? ");
			scanf("%s", &resposta);
		}
		
		
		printf("Obrigado pelas respostas!");
		
		
	}
	
}
