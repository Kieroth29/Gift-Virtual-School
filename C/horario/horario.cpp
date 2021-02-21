#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Funcionarios{
	char nome[50];
	int faltas;	
}Funcionarios;

Funcionarios fn[5];

int ex = 0;

void criar(){
	
	FILE *pa;
	pa = fopen("arquivo.txt","r");
	fclose(pa);
}

void conferir() {
      
    FILE *pa;
	char linha[50],cont = 0;
	
    printf("Leitura do arquivo\n");

	pa = fopen("arquivo.txt", "r");
        
	for(cont = 0;cont < 5;cont++){
		fgets(linha,50,pa);
		printf("%s presente. \n",linha);
		
		if(strncmp(linha,fn[cont].nome,50) == 0){
			fn[cont].faltas += 1;
			printf("faltas %s = %d\n",linha,fn[cont].faltas);
		}
		
	}	
	
	
	fclose(pa);
	
	printf("\n");
}

void cadastrar(){
	
	FILE *pa;

	int cont = 1;
	
	getchar();
	
	while(cont < 6){
		
		printf("Insira o nome do %d° funcionário: \n",cont);
		fgets(fn[cont].nome,20,stdin);
		
		pa = fopen("arquivo.txt", "a");
		
		fprintf(pa,fn[cont].nome);
		fclose(pa);
		
		cont++;
	}
	
}

int main(){
	
	// pa = fopen("arquivo.txt","r");
	// r: reading; w: writing; a: append
	criar();
	
	int esc;
	
	setlocale(LC_ALL,"portuguese");
	
	while(ex == 0){
		printf("1 - Conferir presença\n");
		printf("2 - Cadastrar\n");
		printf("3 - Sair\n");
		
		scanf("%d",&esc);
		
		switch(esc)
		{
		case 1:
			conferir();
			break;
		case 2:
			cadastrar();
			break;
		case 3:
			ex = 1;
			break;
		}
		
	}
	
}