//UC21107546
//GABRIEL NUNES SANTOS DE MATOS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main(){
	char destino[20],validar;
	int qtddeAssentos,idade;
	
	printf("NOME DO DESTINO:\n");
	do{
		fgets(destino,20,stdin);
		if(strcmp(destino,"")==0)
			printf("NAO PASSOU\n");
		else
			printf("PASSOU\n");
	}while(strcmp(destino,"")==1);
	printf("QUANTIDADES DE ASSENTOS DISPONIVEIS:?\n");
	do{
		scanf("%d",&qtddeAssentos);
		if(qtddeAssentos>=90 && qtddeAssentos<=200)
			printf("DEU CERTO\n");
		else
			printf("INVALIDO\n");	
	}while(qtddeAssentos<90 || qtddeAssentos>200);
	
	char ocupacao[qtddeAssentos],continuar;
	int numAssento[qtddeAssentos],idPassagem[qtddeAssentos],qtdDisponivel=qtddeAssentos,contadorTotal=0,qtdReserva=0,qtdConfirmadas=0,i,numAssentoDesejado,flag=0,respostaCliente,valorTotal=0;
	
	for(i=0;i<qtddeAssentos;i++){
		if(i == 0)
			numAssento[i] = 1;
		else
			numAssento[i] = numAssento[i-1] + 1;
	}
	
	for(i=0;i<qtddeAssentos;i++){
			ocupacao[i] = 'D' ;
			
	}

	do{	
		do{
			do{
			//	flag=0;
				printf("QUAL O NUMERO DO ASSENTO DESEJA:?\n");
				scanf("%d",&numAssentoDesejado);
				for(i=0;i<qtddeAssentos;i++){
					if(numAssentoDesejado == numAssento[i] && ocupacao[i] == 'D'){//verificar o status do assento
						printf("ASSENTO VALIDO\n");
						ocupacao[i] = 'R';
						qtdReserva++;
						flag=1;
					}
				}				
			}while(flag!=1);
			flag=0;
			do{
				printf("DESEJA CANCELAR OU CONFIRMAR A COMPRA:?\nDIGITE 1 PARA CONFIRMAR\nDIGITE 2 PARA CANCELAR\n");
				fflush(stdin);
				scanf("%d",&respostaCliente);
				if(respostaCliente==1 || respostaCliente==2){
					printf("PASSOU\n");
					flag=1;
				}else{
					printf("RESPOSTA INVALIDA\n");
				};
				
			}while(respostaCliente!=1 && respostaCliente!=2);
			switch(respostaCliente){
				case 1:
					qtdConfirmadas++;
					qtdDisponivel--;
					ocupacao[numAssentoDesejado-1] = 'C'; 
					break;
				case 2:
					ocupacao[numAssentoDesejado-1] = 'D';
					qtdReserva--;
					break;
				
			}//fim do switch
			
			
		}while(flag!=1);
		do{
			printf("DESEJA ADICIONAR OUTRO PASSAGEIRO:?\nDIGITE S PARA SIM E N PARA NAO\n");
			fflush(stdin);
			scanf("%c",&continuar);
			continuar = toupper(continuar);
			if(continuar == 'S' || continuar == 'N')
				printf("RESPOSTA VALIDA\n");
			else
				printf("RESPOSTA INVALIDA\n");
		}while(continuar != 'S' && continuar != 'N'); 
	}while(continuar == 'S');
	printf("QUANTIDADE DE ASSENTOS RESERVADOS E %d\n",qtdReserva);
	printf("QUANTIDADE DE ASSENTOS CONFIRMADOS E %d\n",qtdConfirmadas);
	printf("QUANTIDADE DE ASSENTOS DISPONIVEIS E %d\n",qtdDisponivel);
	int divisor=qtddeAssentos;
	for (i=0;i<qtddeAssentos;i++){
		printf("%c",ocupacao[i]);
		divisor--;
		if(divisor == qtddeAssentos/4){
			printf("\n");
		}	
	}
	return 0;
}
