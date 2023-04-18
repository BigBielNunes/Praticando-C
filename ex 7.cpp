#include<stdio.h>//entrada e saida
#include<stdlib.h>//fun��es de uso geral

int main(){
	int a, b, c, delta;
	double xUm, xDois; 
	printf("DIGITE O VALOR DE B: ");
	scanf("%d", &b);
	fflush(stdin);
	printf("DIGITE O VALOR DE A: ");
	scanf("%d", &a);
	fflush(stdin);
	printf("DIGITE O VALOR DE C: ");
	scanf("%d", &c);
	fflush(stdin);
	delta= (b * b) - ( 4 * a * c);
	printf("O VALOR DO DELTA E %d", delta);
	if (delta < 0) 
		printf("VALORES DE A, B e C INVALIDOS");
			else if( delta == 0)
				printf("VALORES DE A, B e C INVALIDOS");
					else 
						xUm = -b + sqrt(delta)/ 2a
						xDois = -b - sqrt(delta)/ 2a
						printf("O SEU X UM SERA: %d\n E O SEU X DOIS SERA %d: ", xUm, xDois);
						
	return 0;
		
}

