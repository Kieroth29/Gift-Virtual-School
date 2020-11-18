#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int checarMaioridade(int idade,char nome[20]){
	
	if(idade >= 18){
		return(1);
	}else{
		printf("O usuário é menor de idade. \n");
		return(0);
	}
	
}

void cadastrarEmprego(char *cargo,char *empresa){
	
	printf("Insira o cargo do funcionário: \n");
	scanf(" %s",&cargo);
	
	printf("Informe o nome da empresa: \n");
	scanf(" %s",&empresa);
	
}

main(){
	
	int idade;
	char nome[20],cargo[20],empresa[30];
	char *ptrcargo = cargo,*ptrempresa = empresa;
	
	setlocale(LC_ALL,"portuguese");
	
	printf("Insira o nome: \n");
	scanf(" %s",&nome);
	
	printf("Informe a idade: \n");
	scanf("%d",&idade);
	
	if(checarMaioridade(idade,nome) == 1){
		cadastrarEmprego(ptrcargo,ptrempresa);
	}
	
}