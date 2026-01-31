#include<stdio.h>
int main()
{
int a,b,choose;
printf("enter two numbers");
scanf("%d%d",&a,&b);
printf("1.Addition");
printf("2.subtraction");
printf("3.multiplication");
printf("4.Division");
printf("choose any number ");
scanf("%d",&choose);
if (choose==1)
{
printf("%d",a+b);
}
else if (choose==2)
{
printf("%d",a-b);
}
else if (choose==3)
{
printf("%d",a*b);
}
else if (choose==4)
{
if (b==0)
printf("division by zero is invalid");
else
printf("%d",a/b);
}
return 0;
}
