#include <stdio.h>

int main (){
	int teste = 15;
	int *ptr;
	
	ptr = &teste;
	
	printf("Valor de teste e:  %d\n", teste);
	printf("Valor do endereço de teste e: %p\n", &teste);
	printf(" \n");
	printf("Atribuindo valores com ponteiros...\n");
	
	*ptr = 20;
	printf(" \n");
	printf("Valor de teste e: %d\n", teste);
	printf("Conteudo do ponteiro : %p", ptr);
	
}
