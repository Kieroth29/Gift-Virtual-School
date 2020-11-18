#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	setlocale(LC_ALL,"portuguese");
	
	char lista[5][10] = {"Marcos","João","Maria","Fernando","Carla"};
	int i = 0;
	while( i < 5){
		
		printf("Nome: %s\n",lista[i]);
		
		i++;
	}
	
}