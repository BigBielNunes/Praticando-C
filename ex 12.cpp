#include<stdio.h>//fun��o de entrada e saida
#include<stdlib.h>//fun��o de uso geral

int main(){
	int valor, *ptr;
	scanf("%d", &valor);
	ptr = &valor;
	printf("A POSICAO DE VALOR E %d", ptr);
}
