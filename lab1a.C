#include<stdio.h>


main(){
	int a;
	int b;
	int c;
	int d;
	
	printf("Enter value for a: ");
	scanf("%d", &a);
	printf("Enter value for b: ");
	scanf("%d", &b);
	printf("Enter value for c: ");
	scanf("%d", &c);
	d = (a+b+c/3);
	printf("%d", d);
}
