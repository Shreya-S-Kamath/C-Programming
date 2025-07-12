#include <stdio.h>

int max(int a, int b)
{
    if(a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int knapsack(int cv[], int fv[], int savings, int N)
{
    int *arr;
    arr = (int*) calloc(savings, sizeof(int));
    int i, j, weight, value;

    printf("N=%d\n", N);
    for (i = 0; i < N; i++)
    {
         weight = cv[i];
         printf("CV%d = %d\n", i, cv[i]);
         value = fv[i] - cv[i];
         for (j = savings; j >= weight; j--)
         {
            arr[j] = max(arr[j], (arr[j-weight]+value));
            printf("Max=%d\n", arr[j]);
         }
     }
     return arr[savings];
}
int main()
//{
//    int savings = 250;
//    int currVals[] = { 175, 133, 109, 201, 97};
//    int futureVals[] = { 200, 125, 128, 228, 133};
    int savings = 10;
    int currVals[] = { 1, 2, 4, 6};
    int futureVals[] = { 5, 3, 5, 6};
    int N = sizeof(currVals)/sizeof(currVals[0]);
    printf("Maximum profit = %d", knapsack(currVals, futureVals, savings, N));
    return 0;
}
