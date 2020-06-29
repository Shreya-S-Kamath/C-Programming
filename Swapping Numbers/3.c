//Logic 3: Swapping two numbers using xor operator (^)

#include<stdio.h> 
void main() 
{ 
    int a,b; 
    printf("Enter two numbers to be swapped:\n"); 
    scanf("%d %d",&a,&b); 
    a=a^b; 
    b=a^b; 
    a=a^b; 
    printf("After swapping:\n%d\n%d",a,b); 
    getch(); 
} 

/*
Output:
Enter two numbers to be swapped: 
10 
20 
After swapping: 
20 
10 
*/
 
