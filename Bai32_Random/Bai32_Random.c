#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
	
	// rand()
	int i;		
	srand((int)time(0));	
	for(i = 0; i < 10; i++)
	{
		printf("\nrand = %d", rand());
	}
		
	return 0;
}
