#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ex = 0;

void criar(){
	
	FILE *pa;
	pa = fopen("arquivo.txt","r");
	fclose(pa);
}

void ler() {
      
    FILE *pa;
	char c;

    printf("Leitura do arquivo\n\n");

	pa = fopen("arquivo.txt", "r");
        
	while ((c = getc(pa)) != EOF/*End of file*/) {
		printf("%c", c);
	}

	fclose(pa);
	
	printf("\n");
}

void escrever(){
	
	FILE *pa;
	char input[50],temp;
	
	scanf("%c",&temp);
	fgets(input,50,stdin);
	
	pa = fopen("arquivo.txt", "a");
	
	fprintf(pa,input);
	fclose(pa);
	
}

int main(){
	
	// pa = fopen("arquivo.txt","r");
	// r: reading; w: writing; a: append
	criar();
	
	int esc;
	
	setlocale(LC_ALL,"portuguese");
	
	while(ex == 0){
		printf("1 - Ler arquivo\n");
		printf("2 - Escrever\n");
		printf("3 - Sair\n");
		
		scanf("%d",&esc);
		
		switch(esc)
		{
		case 1:
			ler();
			break;
		case 2:
			escrever();
			break;
		case 3:
			ex = 1;
			break;
		}
		
	}
	
}