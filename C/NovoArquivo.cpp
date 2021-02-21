#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct Dados{
	int idade,id;
	char nome[20],cargo[30];
} dados;

int ex = 0;

void adicionar(int* x){
	
	printf("Insira o nome do funcionário: \n");
	scanf("%s",&dados.nome);
	
	printf("Insira o cargo do funcionário: \n");
	scanf("%s",&dados.cargo);
	
	printf("Insira o nome do funcionário: \n");
	scanf("%d",&dados.idade);
	
	dados.id = *x;
	*x++;
	
}

void consultar(){
	
	
	
}

void remover(){
	
	
	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int cont = 1, esc;
	
	while(ex == 0){
		printf("1 - Adicionar funcionário\n");
		printf("2 - Consultar\n");
		printf("3 - Remover\n");
		scanf("%d",&esc);
		
		switch(esc)
		{
		case 1:
			adicionar(&cont);
			break;
		default:
			break;
		}
	}
}