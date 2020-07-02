// Armstrong number using while loop

#include <stdio.h>
int main() 
{
    int num, temp , remainder, sum = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) 
    {
        remainder = temp % 10;
        sum += remainder * remainder * remainder;
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}

/*
Output:
Enter a three-digit integer: 371
371 is an Armstrong number.
*/
