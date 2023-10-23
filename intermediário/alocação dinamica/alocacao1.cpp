#include <stdio.h>
#include <stdlib.h>

// usando malloc
int main(){
	
	int *numeros;
	int n, i;
	
	printf("Quantidade de numeros: ");
	scanf("%d", &n);
	
	numeros = (int*)malloc(n*sizeof(int));
	
	for(i = 0; i < n; i++){
		printf("numero %d:", i);
		scanf("%d", &numeros[i]);
	}
	printf("Numeros lidos: ");
	for(i = 0; i < n;i++){
		printf("%d ", numeros[i]);
	}
	
	
	 
	
}
