#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	
	int i = 0,a = 1,b = 2,c = 3,d = 4;
	
	i++;
	a += 1;
	b -= 2;
	c *= 3;
	d /= a;
	
	printf("i = %d\n",i);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);
}