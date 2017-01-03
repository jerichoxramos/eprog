#include<stdio.h>
int main(){
	int i=232000000;
	int y=0;
	while(i<233000000){
		  i++;
		  if(i%2 == 0 && i%3 == 0 && i%5 == 0 && i%7 == 0 && i%11 == 0 && i%13 == 0 && i%17 == 0 && i%19 == 0){
		  	y=y+i;
		  }
		  
	}
	printf("%d",y);
}
