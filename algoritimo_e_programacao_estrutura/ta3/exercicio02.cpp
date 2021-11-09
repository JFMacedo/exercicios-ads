#include <iostream>

void inserir(int a[]){
	int i;
	for(i=0; i<3; i++){
		printf("\n Digite o valor %d: ", i);
		scanf("%d", &a[i]);
	}
}

void imprimir(int b[]){
	int i;
	for(i=0; i<3; i++){
		printf("\n numeros[%d] = %d", i, (2*b[i]));
	}
}

int main(int argc, char** argv) {
	int numeros[3];
	
	printf("\n Preencha o vetor: \n");
	inserir(numeros);
	
	printf("\n Valor final");
	imprimir(numeros);
	
	return 0;
}
