#include <stdio.h>
int main()
{
int x, y, z;
printf("Enter the first value:");
scanf("%d", &x);
printf("Enter the second value:");
scanf("%d", &y);
z = x - y;
printf("%d - %d = %d\n", x, y, z);
return 0;
}
