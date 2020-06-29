// Bubble Sort Optimized Code

#include<stdio.h> 
int main() 
{ 
    int i,j,n,temp,a[100],swapped;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        swapped=0;
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=1;
            }
        }
        if (swapped==0) 
            break;
    }
    printf("The array elements after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}

/*
Output:
Enter the value of n:5
Enter the array elements:
12 678 456 34 99
The array elements after sorting:
12	34	99	456	 678	
*/
