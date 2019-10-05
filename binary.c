#include<stdio.h>
int binary(int);
int main()
{
    int n;

    printf("enter a number:\n");
    scanf("%d",&n);

    printf("binary conversion of %d is %d \n",n,binary(n));


}
int binary(int x)
{
    int a,b;

    if(x==0)
    {
        return 0;
    }
    else
    {
        a=x%2;
        return(a+10*binary(x/2));
    }
}
