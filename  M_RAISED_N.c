#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
    int m,n,p;
    printf("To calculate value of M raised to the power of N.\n");
    printf("Enter the base value: ");
    scanf("%d",&m);
    printf("Enter the power:\n");
    scanf("%d",&n);
    p=power(m,n);
    printf("When %d is raised by power of %d, we get %d.\n",m,n,p);
}
int power(int m,int n)
{
   int p=pow(m,n);
   return p;
}