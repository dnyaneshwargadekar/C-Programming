#include<stdio.h>

int Addition(int a, int b)
{
    int add = 0;
    add = a + b;
    return add;
}

int main()
{
    int no1 = 0, no2 = 0, ans = 0;

    printf("Enter first number : \n");
    scanf("%d",&no1);

    printf("Enter second number : \n");
    scanf("%d",&no2);

    ans = Addition(no1, no2);

    printf("Addition is : %d\n",ans);

    return 0;
}