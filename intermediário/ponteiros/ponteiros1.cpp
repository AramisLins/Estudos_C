#include <stdio.h>

int main (){
	int var = 15;
	int *ptr;
	
	ptr = &var;
	
	printf("Conteudo de var  = %d\n", var);
	printf("Conteudo apontado por ptr = %d\n", *ptr);
	printf("endereco apontado por ptr = %p\n", ptr);
	printf("endereco do ponteiro  = %p\n", &ptr);
	
	
	//*ptr : conteudo do endere�o da vari�vel apontada
	// ptr : o endere�o da variavel apontada
	// &ptr : endere�o do ponteiro
	
	*ptr = 73;
	
	printf("Conteudo de var  = %d\n", var);
	
	
	
	
}
