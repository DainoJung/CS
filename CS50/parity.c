#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: ");
    if(n % 2 == 0)
    {
        printf("n은 짝수입니다.\n");
    }
    else
    {
        printf("n은 홀수입니다.\n");
    }
}