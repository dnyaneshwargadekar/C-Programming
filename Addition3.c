#include<stdio.h>

int Addition(int a, int b)
{
    int add = 0;
    add = a + b;
    return add;
}

int main()
{
    int no1 = 10, no2 = 11, ans = 0;

    ans = Addition(no1, no2);

    printf("Addition is : %d\n",ans);

    return 0;
}