#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char*str;
	
	printf("Digite um caractere: ");
	scanf("%c", &str);
	printf("%c\n", str);
	printf("%d\n", str);
	printf("%x\n", str);
	
	
}
