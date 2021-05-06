#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {

	int year;
	scanf("%d", &year);

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) printf("1");
	else printf("0");

	/*
	LEAP YEAR 1 : Multiple of 4 && not a multiple of 100
	LEAP YEAR 2 : Multiple of 400

	NOT LEAP YEAR 1 : Not a multiple of 4 && a multiple of 100
	NOT LEAP YEAR 2 : Not a multiple of 400
	*/
	
	return 0;
}