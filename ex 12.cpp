#include<stdio.h>//função de entrada e saida
#include<stdlib.h>//função de uso geral

int main(){
	int valor, *ptr;
	scanf("%d", &valor);
	ptr = &valor;
	printf("A POSICAO DE VALOR E %d", ptr);
}
