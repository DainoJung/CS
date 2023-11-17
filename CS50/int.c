#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("나이를 입력하세요: ");

    printf("당신은 지금까지 %i일을 살아왔군요.\n", age * 365);
}