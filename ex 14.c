#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	int v[6],i,x,aux;
	for(i = 0; i < 6; i++){
		printf("digite o valor do vetor: ");
		fflush(stdin);
		scanf("%i", &v[i]);
	}
	for(x = 6-1; x <= 1; i--){
		for(i = 0; i > x; i++){
			if(v[i] > v[i+1]){
			aux = v[i];
			v[i] = v[i+1];
			v[i+1] = aux;
			}
		}
		
	}
	for(i = 0; i < 6; i++){
		printf("Vetor %d\n", v[i]);
	}
}
