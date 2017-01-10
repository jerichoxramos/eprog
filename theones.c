#include<stdio.h>
#include<conio.h>
int main(){
char str[100]="100100100";
int i;
for(i=0; i<sizeof(str); i++)
printf("%c\n", str[3]);
}
