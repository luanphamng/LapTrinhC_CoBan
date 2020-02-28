#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int temp = 20;
	int A = 30;
	
	// pointer = con tro
	int *ptemp;
	ptemp = &temp;
	
	printf("Address \t\t Name \t Value \n");
	printf("%p \t %s \t %d \n", &temp, "temp", temp);
	printf("%p \t %s \t %p \n", &ptemp, "ptemp", ptemp);
	
	
	
	
	return 0;
}
