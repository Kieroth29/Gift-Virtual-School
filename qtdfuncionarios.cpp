#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ex = 0;

void aumentarQtd(int* x){
	
	int qtd;
	
	printf("Quantos funcionários entraram? \n");
	scanf("%d",&qtd);
	
	*x += qtd;
	
}

void diminuirQtd(int* x){
	
	int qtd;
	
	printf("Quantos funcionários saíram? \n");
	scanf("%d",&qtd);
	
	if(*x - qtd < 0){
	    printf("Operação inválida, número é maior do que a quantidade anterior de funcionários.\n");
	    system("pause");
	}else{
	    *x -= qtd;
	}
	
}

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int qtdFuncionarios = 0, esc;
	
	while(ex == 0){
		printf("Funcionários na loja: %d\n",qtdFuncionarios);
	
		printf("1 - Entrada de funcionários\n");
		printf("2 - Saída de funcionários\n");
		printf("3 - Fechar\n");
		
		scanf("%d",&esc);
		
		switch(esc){
			case 1:
				aumentarQtd(&qtdFuncionarios);
				system("cls");
				break;
			case 2:
				diminuirQtd(&qtdFuncionarios);
				system("cls");
				break;
			case 3:
				ex = 1;
				break;
		}
		
	}
}