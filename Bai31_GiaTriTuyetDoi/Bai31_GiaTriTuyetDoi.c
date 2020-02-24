#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	// abs()
	int year1, year2;
	int age;
	
	printf("Nhap year1: ");
	scanf("%d", &year1);
	
	printf("Nhap year2: ");
	scanf("%d", &year2);
	
	age = abs(year1 - year2);
	
	printf("Tuoi cua ban: %d", age);
	
	// vi du khac
	sqrt(abs(age));
	
	
	return 0;
}
