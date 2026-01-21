#include<stdio.h>
int sum(int a,int b)
{
return a+b;
}
int product(int a,int b)
{
return a*b;
}
int main()
{
int x,y;
printf("enter the first number");
scanf("%d",&x);
printf("enter the second number");
scanf("%d",&y);
printf("sum=%d\n",sum(x,y));
printf("product=%d\n",product(x,y));
}


