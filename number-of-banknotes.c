#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>




int main() {

	int money;
	int b50, b20, b10, b5, b1;
	printf("Enter a price: ");
	scanf("%d", &money);

	b50 = money / 50;
	b20 = (money % 50) / 20;
	b10 = ((money % 50) % 20) / 10;
	b5 = (((money % 50) % 20) % 10) / 5;
	b1 = ((((money % 50) % 20) % 10) % 5) / 1;

	printf("50$:x%d	20$:x%d	10$:x%d	5$:x%d	1$:x%d", b50, b20, b10, b5, b1);




}