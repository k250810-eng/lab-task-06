#include <stdio.h>

int main()
{

int num,first,last;

printf("enter num \n");
scanf("%d", &num);

last= num%10;

while(num>10)
{
	num /= 10;
}
first = num;

printf("sum of first and last %d", first+last);

return 0;
}























}

