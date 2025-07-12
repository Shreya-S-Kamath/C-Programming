//#include<stdio.h>
//void main()
//{
//    int a;
//    printf("Enter an integer:");
//    scanf("%d",&a);
//    printf("Number is:%d",a);
//    getch();
//}
//By default an integer is signed.
#include<stdio.h>
#include<math.h>
//void range(char type[10])
//{
//    int s=sizeof(type);
//    n=s*8;
//    //printf("Signed range:%")
//    ul=-2^(n-1);
//    uu=(2^(n-1))-1;
//    sl=0;
//    su=(2^n)–1;
//}
void main()
{
    int s,n;
    s=sizeof(int);
    n=s*8;
    printf("Signed range:%d to %d\n",0,((pow(2,n))-1));
    printf("Unsigned range:%d to %d\n",(pow(-2,(n-1))),(pow(2,(n-1))-1));
}
