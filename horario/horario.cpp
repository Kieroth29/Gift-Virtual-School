#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Funcionarios{
	char nome[20];
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
	char c,linha[50];
	

    printf("Leitura do arquivo\n\n");

	pa = fopen("arquivo.txt", "r");
        
	while ((c = getc(pa)) != EOF/*End of file*/) {
		fgets(linha,50,pa);
	}

	fclose(pa);
	
	printf("\n");
}

void cadastrar(){
	
	FILE *pa;
	char input[50];
	int cont = 1;
	
	while(cont < 6){
		getchar();
		printf("Insira o nome do funcionário: \n");
		fgets(fn.nome,20,stdin);
		
		pa = fopen("arquivo.txt", "a");
		
		fprintf(pa,fn[cont]);
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