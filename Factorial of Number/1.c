// Logic 1: Factorial of a number using while loop

#include <stdio.h> 
int main() 
{ 
    int n,i,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    i=n;
    while(n/i != n)
    {
        fact=fact*i;
        i--;
    }
    printf("Factorial of %d is %d",n,fact); 
    return 0; 
}

/*
Output:
Enter a number:6
Factorial of 6 is 720
*/
