#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int menu;
	printf("Digite a atividade desejada: ");
	scanf("%d", &menu);
	
	if(menu == 1){
			// Atv 1
		float x;
		float y;
		printf("Digite suas 2 notas: ");
		scanf("%f %f", &x, &y);
		int media = x + y;
		if (media >= 6.0){
			printf("Aprovado");
		}
		else if(media < 6.0 && media >= 1.0){
			printf("Final");
		}
		else if(media < 1.0){
			printf("reprovado");
		}
	}
	else if( menu == 2){
		int x;
		printf("Digite um numero: ");
		scanf("%d", &x);
		if(x % 2 == 0){
			printf("Ele é par!");
		}
		else{
			printf("Ele é impar");
		}
	}
	else if(menu == 3){
		int ano;
		int anoAtual = 2023;
		int calc;
		printf("Digite o ano do seu nascimento: ");
		scanf("%d", &ano);
		calc = anoAtual - ano;
		if(calc >= 5 && calc <= 7){
			printf("A idade é %d e sua categoria é Infantil A", calc);
		}
		else if(calc >= 8 && calc <= 10){
			printf("A idade é %d e sua categoria é Infantil B", calc);
		}
		else if(calc >= 11 && calc <= 13){
			printf("A idade é %d e sua categoria é Juvenil A", calc);
		}
		else if(calc >= 14 && calc <= 17){
			printf("A idade é %d e sua categoria é Juvenil B", calc);
		}
		else{
			printf("A idade é %d e sua categoria é Sênior", calc);
		}
		
		
		
	}
	
	
	
	

	
	
	//Atv 2
	
	
	
	
}
