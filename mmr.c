#include <stdio.h>
int main(){
  
int MMR1, MMR2, d;
printf("Enter the first value:");
scanf("%d", &MMR1);
printf("Enter the second value:");
scanf("%d", &MMR2);
d = MMR1 - MMR2;
printf("%d - %d = %d\n", MMR1, MMR2, d);
return 0;
}
