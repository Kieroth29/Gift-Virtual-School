#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct clube{
	char nome[20],pais[20];
	int codigo,valido;
}Clube;

Clube cl[3];

int cont = 0,cod = 0;

void cadastrar(){
	
	getchar();
	printf("\nInsira o nome do clube: \n");
	fgets(cl[cod].nome,20,stdin);
	
	printf("Insira o país do clube: \n");
	fgets(cl[cod].pais,20,stdin);
	
	cl[cod].valido = 1;
	
	cod++;
	
	system("cls");
	
}

void buscar(){
	
	getchar();
	char nomebusca[20];
	int pos = 3;
	
	printf("\nInsira o nome do clube: \n");
	fgets(nomebusca,20,stdin);
	
	for(int i = 0; i < sizeof(cl);i++){
	
    if(strcmp(nomebusca,cl[i].nome) == 0 && cl[i].valido == 1){
		pos = i;
	}
	
	}
	
	if(pos != 3){
	printf("Nome do clube: %s\n",cl[pos].nome);
	printf("País do clube: %s\n",cl[pos].pais);
	
	system("pause");
	system("cls");
	}else{
		printf("Clube não encontrado. \n");
	}
}

void remover(){
	
	getchar();
	char nomebusca[20];
	int pos = 3;
	
	printf("\nInsira o nome do clube: \n");
	fgets(nomebusca,20,stdin);
	
	for(int i = 0; i < sizeof(cl);i++){
	
    if(strcmp(nomebusca,cl[i].nome) == 0 && cl[i].valido == 1){
		pos = i;
	}
	
	}
	
	if(pos != 3){
	printf("%s removido do cadastro. \n",cl[pos].nome);
	
	cl[pos].valido = 0;
	
	system("pause");
	system("cls");
	}else{
		printf("Clube não encontrado. \n");
	}
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int esc;
	
	while(cont == 0){
		printf("\nSistema mundial de clubes\n");
		printf("1 - Cadastrar clube\n");
		printf("2 - Buscar clube\n");
		printf("3 - Remover clube\n");
		printf("4 - Sair\n");
		printf("\n");
		
		scanf("%d",&esc);
		
		switch(esc){
			case 1:
				cadastrar();
				break;
			case 2:
				buscar();
				break;
			case 3:
				remover();
				break;
			case 4:
				cont = 1;
				break;
		}
	}
	
}