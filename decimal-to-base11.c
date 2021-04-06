#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>




int main() {

	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	printf("11 base: %d%d%d%d", (n / 1331) % 11, (n / 121) % 11, (n / 11) % 11, n % 11);

	



}