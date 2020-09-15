#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char num1[9];
    unsigned char num2[9];
    unsigned char num3[9] = {
        0,
    };
    int input;
    int i_ch, i_ch2;

    while (1)
    {
        printf("2진수와 연산자를 입력하시오\n");
        printf("A: ");
        scanf("%s", num1);
        printf("B: ");
        scanf("%s", num2);
        printf("연산자: 1. and, 2. or, 3. not, 4. nand, 5. nor, 6. xor: ");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
            for (int i = 0; i < 8; i++)
            {
                num3[i] = num1[i] & num2[i];
            }
            printf("A and B 는 %s\n", num3);
            break;
        case 2:
            for (int i = 0; i < 8; i++)
            {
                num3[i] = num1[i] | num2[i];
            }
            printf("A or B 는 %s\n", num3);
            break;
        case 3:
            for (int i = 0; i < 8; i++)
            {
                if (num1[i] == 49)
                {
                    num1[i] = 48;
                }
                else if (num1[i] == 48)
                {
                    num1[i] = 49;
                }

                if (num2[i] == 49)
                {
                    num2[i] = 48;
                }
                else if (num2[i] == 48)
                {
                    num2[i] = 49;
                }
            }

            printf("A의 Not은 %s", num1);
            printf("\n");
            printf("B의 Not은 %s\n", num2);
            break;
        case 4:
            for (int i = 0; i < 8; i++)
            {
                num3[i] = num1[i] & num2[i];
                if (num3[i] == 49)
                {
                    num3[i] = 48;
                }
                else if (num3[i] == 48)
                {
                    num3[i] = 49;
                }
            }
            printf("A Nand B는 %s\n", num3);
            break;
        case 5:
            for (int i = 0; i < 8; i++)
            {
                num3[i] = num1[i] | num2[i];
                if (num3[i] == 49)
                {
                    num3[i] = 48;
                }
                else if (num3[i] == 48)
                {
                    num3[i] = 49;
                }
            }
            printf("A Nor B는 %s\n", num3);
            break;
        case 6:
            for (int i = 0; i < 8; i++)
            {
                num3[i] = num1[i] ^ num2[i];
            }
            printf("A Xor B는 %s\n", num3);
            break;
        }
    }

    return 0;
}