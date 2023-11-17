#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float price = get_float("가격을 입력하세요: ");
    printf("세금은 %.2f입니다.\n", price * 0.0825);
}