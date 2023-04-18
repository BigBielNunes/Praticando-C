#include<stdio.h>//função de entrada e saida
#include<stdlib.h>//funções de uso geral

#define TAM_MAX 10
int main(){
    double VetorReais[TAM_MAX], VetorCopia[TAM_MAX], Vet1[TAM_MAX], Vet2[TAM_MAX], Copia[TAM_MAX*2], VetMenor[TAM_MAX];
    double Maior, Menor;
    int vetor[5];
    int matriz[5][3];
    int i, ColocaoMaior;
    vetor[0]=9;
    vetor[4]=30;
    printf("%d",vetor[0]);
    printf("%d",vetor[4]);
    matriz[0][1]= 15;
    printf("%d",matriz[0][1]);
    for(i == 0; i < 5; i++){//preenchimento de um vetor com um dado
        vetor[i] = 30;
    }
    for(i == 0; i < 5; i++){//colocar os numeros de 1 a 5 em um vetor
        vetor[i]= i+1;
    }
    for(i == 0; i < 5; i++){//colocar os numeros de 5 a 1 em um vetor
        vetor[i]= 5-i;
    }
    for(i == 0; i < TAM_MAX; i++){//uso de constantes para definir o tamanho de um vetor
        VetorReais[i] = TAM_MAX - i;
    }
    for(i == 0; i < 5; i++){//copiar os dados de um vetor para o outro
        VetorCopia[TAM_MAX] = VetorReais[TAM_MAX];
    }
    for(i == 0; i < TAM_MAX; i++){//copiar os dados de Vet1[TAM_MAX] para as 10 primeiras de Copia[TAM_MAX2] 
        Copia[i] = Vet1[i];
	}
    for(i == 10; i < TAM_MAX*2; i++){//copiando os dados de Vet2[TAM_MAX] para as 10 ultimas posições do Copia[TAM_MAX*2], o i começa em 10 para preencher as 10 ultimas posições
    	Copia[i] = Vet2[i];
	}
	for(i == 0; i < TAM_MAX; i++){//leitura dos dados de um vetor
		scanf("%lf", &Vet1[i]);
	}
	for(i == 0; i < TAM_MAX; i++){//encontra o maior valor dentro de um vetor
		scanf("%lf", &Vet1[i]);//preenchendo todos os valores do vetor
	}
	Maior = Vet1[0];//assumindo que a primeira posição e a maior
	for(i == 0; i < TAM_MAX; i++){
		if (Vet[i] > Maior){//compara o Vet1 com o maior vetor se o Vet1[i] possui um valor então a variavel Maior assume o valor de Vet1[i]
			Maior = Vet1[i];
			printf("O valor do Maior é %lf",Maior);
		}
	}
	for(i == 0; i < TAM_MAX; i++){
		scanf("%lf", &Vet1[i]);//preencher todas as posições do vetor
		ColocaoMaior = 0;
		if(Vet1[i] > Vet1[ColocaoMaior]){
			ColocaoMaior = i;
		}
		
	}
	
	
    }
