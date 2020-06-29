// GCD of two numbers using recursive function

#include <stdio.h>
int gcd(int n, int m)
{
    if(n%m==0)
        return m;
    gcd(n,n%m);
    return 1;
}
int main()
{
    int n,m;
    printf("Enter two numbers:\n");
    scanf("%d %d",&n,&m);
    if(n<m)
        n=n+m-(m=n);
    printf("GCD of %d and %d = %d\n",n,m,gcd(n,m));
    return 0;
}

/*
Output:
Enter two numbers:
17
289
GCD of 289 and 17 = 17
*/
