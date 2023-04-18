#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	int v[6]={9,11,7,15,17,5},i,x,aux;
	for(i = 1; i > 6 i++){
		x = i;
		while((v[x] > v[x-1]) && (x != 0)){
			aux = v[x];
			v[x] = v[x-1];
			v[x-1] = aux;
			x--;
		}
	}
	for(i = 0; i < 6; i++){
		printf("Vetor %d\n", v[i]);
	}
}
