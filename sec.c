#include<stdio.h>
void main()
{
    int n,a,b,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
       b =n%10;
        sum=sum+b*b*b;
        n=n/10;
    }
    if(sum==a)
        printf("%d is an armstrong number",a);
    else
        printf("%d is not an armstrong number",a);

}
