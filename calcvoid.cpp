#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int ex = 0;

float adicao(float num1, float num2){
    
	return num1+num2;
	//Retorno do valor da opera��o, implementado no printf

}

float subtracao(float num1, float num2){
	
	num1-=num2;
	//Manipula��o de vari�veis, implementado atrav�s de ponteiros
	
	return 0;
	
}

float multiplicacao(float num1, float num2){
    
	num1*=num2;
	
	return 0;
	
}

float divisao(float num1, float num2){
	
	 return num1/num2;
	
	return 0;

}

float selecao(int esc){
    
    float num1, num2;
    
    printf("Insira o primeiro n�mero: \n");
	scanf("%f",&num1);
	
	printf("Insira o segundo n�mero: \n");
	scanf("%f",&num2);
	
	
	switch(esc){
			
			case 1:
			adicao(num1,num2);
			system("cls");
			break;
		
			case 2:
			subtracao(num1,num2);
			system("cls");
			break;
		
			case 3:
			multiplicacao(num1,num2);
			system("cls");
			break;
		
			case 4:
			divisao(num1,num2);
			system("cls");
			break;
	}

	
	printf("Resultado: %f\n",adicao(num1,num2));
	
	char ver[1]={""},ver2[1]={"s"},ver3[1]={"n"};
	
	printf("Deseja continuar? S/N\n");
	scanf(" %c",&ver);
	
	int cont = strcmp(ver,"s");
	
	ex = cont;
	
    
}

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int esc;
	
	while(ex == 0){
	printf("Menu da calculadora\n");
	printf("1 - Adi��o\n");
	printf("2 - Subtra��o\n");
	printf("3 - Multiplica��o\n");
	printf("4 - Divis�o\n");
	
	scanf("%d",&esc);
	
	selecao(esc);
	
	}
}