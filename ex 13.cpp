#include<stdio.h>//entrada e saida
#include<stdlib.h>// funções de uso geral

int main(){
	int i, idade;
	for(i=0;i<5;i++){
	printf("DIGITE A IDADE: ");
	scanf("%d", &idade);
	fflush(stdin);
	idade = idade + 50;
	printf("SUA IDADE DAQUI 50 ANOS SERA: %d"\n, idade);
	}
}

