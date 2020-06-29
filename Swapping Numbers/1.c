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
 
