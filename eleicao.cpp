/******************************************************************************

Elaborem um sistema de vota��o com 3 candidatos. O sistema dever� conter uma op��o de cadastro, outra de vota��o e a 
�ltima para sair.

No menu de cadastro, o usu�rio dever� inserir o nome e o c�digo de cada candidato.

A tela de vota��o mostrar� o c�digo e o nome de cada candidato, al�m de op��es de voto branco e nulo. Ao votar, 
o programa exibir� uma mensagem 
confirmando o voto com o nome do escolhido.

Ap�s sair da tela de vota��o, o programa dever� mostrar a quantidade de votos para cada op��o.

- struct

nome e c�digo dos candidatos
quantidade de votos

- cadastro

nome do candidato
c�digo do candidato

- vota��o

mostrar c�digo e nome dos candidatos
voto branco
voto nulo
encerrar vota��o

exibir mensagem confirmando o voto para x candidato

- sair

*******************************************************************************/

#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

typedef struct votacao{
	int votos, cod;
	char nome[25];
}dados;

dados candidato[3];

int vb = 0,vn = 0;
	
void cadastrar(){

	for(int x = 0; x < 3;x++){
	   getchar();
	   
	   printf("Insira o nome do candidato %d: \n",x+1);
	   gets(candidato[x].nome);
	   printf("Insira o c�digo do candidato %d: \n",x+1);
	   scanf("%d",&candidato[x].cod);
	  
	   system("cls");
	}

}

void votar(){
	
	int cho = 0;
	
	do{
	printf("Menu de vota��o\n");
	printf("%d - %s \n",candidato[0].cod,candidato[0].nome);
	printf("%d - %s \n",candidato[1].cod,candidato[1].nome);
    printf("%d - %s \n",candidato[2].cod,candidato[2].nome);
    printf("4 - Voto em branco \n");
    printf("5 - Voto nulo \n");
    printf("6 - Sair \n");
    scanf("%d",&cho);
    
    	if(cho == candidato[0].cod){
    		candidato[0].votos++;
    		printf("Voto confirmado para %s.\n",candidato[0].nome);
		}else if(cho == candidato[1].cod){
			candidato[1].votos++;
			printf("Voto confirmado para %s.\n",candidato[1].nome);
		}else if(cho == candidato[2].cod){
    		candidato[2].votos++;
    		printf("Voto confirmado para %s.\n",candidato[2].nome);
		}else if(cho == 4){
			vb++;
			printf("Voto em branco computado.\n");
		}else if(cho == 5){
			vn++;
			printf("Voto nulo computado. \n");
		}else if(cho ==6){
			printf("Vota��o encerrada.\n");
		}else{printf("Candidato n�o encontrado.\n");}

    system("pause");
    system("cls");
    
	}while(cho != 6);
	
	for(int x = 0;x < 3;x++){
		printf("N�mero de candidato %s: %d \n",candidato[x].nome,candidato[x].votos);
	}
	
	printf("N�mero de votos brancos: %d \n",vb);
	printf("N�mero de votos nulos: %d \n",vn);
	
	system("pause");
	system("cls");
	
}
      
int main() {   

	int op;

	setlocale(LC_ALL,"portuguese");
	 
	 do{    
	   printf("1 - Cadastrar\n");
	   printf("2 - Votar\n");
	   printf("3 - Sair\n");
	   scanf("%d",&op);
	   
	   switch(op){
		   case 1:
		   	cadastrar();
		   	break;
		   case 2:
		   	votar();
		   	break;
		   case 3:
		   	op = 3;
	   }
	   
	 }while(op != 3);
	  
  system("pause");     

} 