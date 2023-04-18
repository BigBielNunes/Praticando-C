//UC21107546	
//GABRIEL NUNES SANTOS DE MATOS
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main(){
	float nota[3];
	for(int i=1; i<4; i++){
	printf("DIGITE A NOTA %d DO ALUNO: ",i);
	scanf("%f",&nota[i]);
	}
	for(int i=1; i<4; i++){
		printf("A NOTA %d DO ALUNO FOI %f",i,nota[i]);
	}
}
