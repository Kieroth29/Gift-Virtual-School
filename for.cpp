#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	float nota,aux, media = 7.00;
	int qtdalunos = 5,aprovados = 0, reprovados = 0;
	char alunos[5][15]={"Marcos","João","Maria","Fernando","Carla"};
	
	for(int i = 0;i < qtdalunos;i++){
		
		nota = 0.00;
		aux = 0.00;
		
		printf("Aluno: %s\n",alunos[i]);
		printf("Insira a nota da atividade 1: \n");
		scanf("%f",&aux);
		
		nota += aux;
		
		
		printf("Insira a nota da atividade 2: \n");
		scanf("%f",&aux);
		
		nota += aux;
		
		printf("Insira a nota da atividade 3: \n");
		scanf("%f",&aux);
		
		nota += aux;
		
		nota /=3;
		
		if(nota < media){
			reprovados++;
		}else if(nota >= media){
			aprovados++;
		}

	}
	
	printf("%d alunos aprovados, %d alunos reprovados.",aprovados,reprovados);
	
}