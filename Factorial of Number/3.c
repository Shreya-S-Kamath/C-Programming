//Logic 3: Factorial of a number using recursive function

#include <stdio.h> 
unsigned int factorial(unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
  
int main() 
{ 
    int n; 
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Factorial of %d is %d", n, factorial(n)); 
    return 0; 
} 

/*
Enter a number:6
Factorial of 6 is 720
*/
