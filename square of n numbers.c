#include<stdio.h>
int square(int a)
{
return a*a;
}




int main()
{
int n,i,num;
printf("enter how many numbers");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter the number %d",i);
scanf("%d",&num);
printf("square=%d\n",num*num);
}
return 0;
}


    