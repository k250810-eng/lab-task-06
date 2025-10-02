#include <stdio.h>

int main()
{

int num1,num2;
int mult =0,div = 0;

printf("Enter your number1 \n");
scanf("%d",&num1);

printf("Enter your number2 \n");
scanf("%d",&num2);

	
for(int i = 1; i<=num1; i++)
{
	mult+=num2;
} 
printf("your multiplied value %d \n", mult);

if(num2==0)
{
    printf("zero error");
    return 0;
}
while(num1>0)
{
num1 -= num2;
  div++;		
}
printf("your divided value %d \n", div);

return 0;
}























}

