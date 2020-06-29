//Logic 1: Swapping two numbers using temp

#include<stdio.h> 
void main() 
{ 
    int a,b,temp; 
    printf("Enter two numbers to be swapped:\n"); 
    scanf("%d %d",&a,&b); 
    temp=a; 
    a=b; 
    b=temp; 
    printf("After swapping:%d\n%d",a,b); 
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
