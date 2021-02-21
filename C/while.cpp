#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float saldo = 1000, saque;
	int exec = 1;
	char ver[1]={""};
	
	while(exec == 1){
		
		printf("Insira o valor do saque: \n");
		scanf("%f",&saque);
		
		if(saldo < saque){
			printf("Saldo insuficiente. \n");
			printf("Deseja continuar? S/N\n");
			scanf(" %c",&ver);
			
			if(strcmp(ver,"n") == 0){
				exec = 0;
			}else if(strcmp(ver,"s") == 0){
				system("cls");
			}else if(strcmp(ver,"s")!=0 && strcmp(ver,"n") !=0){
				printf("Opção inválida,tente novamente. \n");
			}
		}else if(saldo >= saque){
			saldo-=saque;
			printf("Saque efetuado com sucesso. Novo saldo: R$ %.2f\n",saldo);
			printf("Deseja continuar? S/N\n");
			scanf(" %c",&ver);
			
			if(strcmp(ver,"n") == 0){
				exec = 0;
			}else if(strcmp(ver,"s") == 0){
				system("cls");
			}else if(strcmp(ver,"s")!=0 && strcmp(ver,"n") !=0){
				printf("Opção inválida,tente novamente. \n");
			}
		}
		
	}
	
	
}