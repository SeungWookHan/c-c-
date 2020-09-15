#include <stdio.h>
#include <string.h>

int main()
{
    int input = 0;
    int mask;
    char hexadecimal[20] = {
        0,
    };
    int decimal;
    int mod;
    int position = 0;

    while (1)
    {
        printf("Input Number(Decimal: if you input zero then exit): ");
        scanf("%d", &input);
        decimal = input;
        if (input > 1023 || input < -1024)
        {
            break;
        }
        for (int i = 11; i >= 0; i--)
        {
            mask = 1 << i;
            printf("%d", input & mask ? 1 : 0);
            if (i % 4 == 0)
                printf(" ");
        }
        printf("\n");
        break;
    }

    while (1)
    {
        int mod = decimal % 16; // 16으로 나누었을 때 나머지를 구함
        if (mod < 10)           // 나머지가 10보다 작으면
        {
            // 숫자 0의 ASCII 코드 값 48 + 나머지
            hexadecimal[position] = 48 + mod;
        }
        else // 나머지가 10보다 크거나 같으면
        {
            // 나머지에서 10을 뺀 값과 영문 대문자 A의 ASCII 코드 값 65를 더함
            hexadecimal[position] = 65 + (mod - 10);
        }

        decimal = decimal / 16; // 16으로 나눈 몫을 저장

        position++; // 자릿수 변경

        if (decimal == 0) // 몫이 0이되면 반복을 끝냄
            break;
    }

    for (int i = position - 1; i >= 0; i--)
    {
        printf("%c", hexadecimal[i]);
    }

    printf("\n");

    return 0;
}