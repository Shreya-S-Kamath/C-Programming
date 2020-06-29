// Logic 4: Factorial of a number using recursive function and ternary operator

#include <stdio.h> 
int factorial(int n) 
{ 
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); 
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
Output:
Enter a number:6
Factorial of 6 is 720
*/
