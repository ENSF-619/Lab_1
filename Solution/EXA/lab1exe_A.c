

/*
* Fil Name: lab1exe_A.c
* Assignment: Lab1 exercise A
* Completed by: Ziad Chemali
* Submission date: 

*/
#include<stdio.h>
int main() {
	int a = 0, b = 0;
	printf("Please enter a value for variable a:\n");
	scanf_s("%d", &a);
	printf("Please enter a value for variable b:\n");
	scanf_s("%d", &b);
	printf("The values of a and b are %d for a and %d for b.\n", a, b);
	printf("The value of a %% b is %d.\n", a%b);
	return 0;

}