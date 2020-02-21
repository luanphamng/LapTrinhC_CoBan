#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	float a1 = 9.6314;
	float a2 = 4.329;
	
	// floor : lam tron xuong
	printf("Floor a1 = %0.2f", floor(a1));
	printf("\nFloor a2 = %0.2f", floor(a2));
		
	// ceil: Lam tron len
	printf("\nCeil a1 = %0.2f", ceil(a1));
	printf("\nCeil a2 = %0.2f", ceil(a2));
		
	// round
	printf("\nRound a1 = %0.2f", round(a1));
	printf("\nRound a2 = %0.2f", round(a2));
	return 0;
}
