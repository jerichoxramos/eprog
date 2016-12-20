#include<stdio.h>
int main(){
	int grade;
	
	printf("Enter your grade: ");
	scanf("%d", &grade);
	if(grade%5 == 0){
		printf("Ed");
	}
	if(grade%3 == 0){
		printf("Pogi");
	}
	if(grade%3,5 == 0){
		printf("Ed Pogi");
	}
}
