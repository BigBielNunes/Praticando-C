//UC21107546
//GABRIEL NUNES SANTOS DE MATOS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>


int main(){
	char vetor[100];
	int quantidade;
	printf("DIGITE A PALAVRA: ");
	fgets(vetor,100,stdin);
	for(int i=0;i<strlen(vetor);i++){
        vetor[i] = toupper(vetor[i]);
    }
	quantidade = strlen(vetor)-1;
	printf("%d\n",quantidade);

	printf("%s", vetor);
}
