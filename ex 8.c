#GABRIEL NUNES SANTOS DE MATOS
#UC21107546

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE*pont_arg;//variavel ponteiro para criação do arquivo
	
	int ano, idade;
	char nome;
	
	printf("digite seu nome: ");
	fflush(stdin);
	scanf("%s",&nome);
	printf("digite o ano em que vc nasceu: ");
	fflush(stdin);
	scanf("%d",&ano);
	
	idade = 2022 - ano;
	
	pont_arg = fopen("arq01.txt","w");
	
	if(pont_arg==NULL){
		printf("erro na abertura do arquivo");
		return 1;
	}
	
	fprintf(pont_arg,"%d", idade);
	
	fclose(pont_arg);
	
	
	
	
}
