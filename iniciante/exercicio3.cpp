#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float Pnota = 0;
	float Snota = 0;
	printf("Digite suas 2 notas: ");
	scanf("%f %f", &Pnota, &Snota);
	float soma = (Pnota + Snota) / 2;
	printf("A média é: %.2f", soma);
	
	
	
}
