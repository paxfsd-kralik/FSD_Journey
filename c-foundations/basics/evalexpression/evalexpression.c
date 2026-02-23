/*
Name: evalexpression.c
Purpose: The program reads and evaluates an expression entered by the user and provides the answer to that expression
Author: Jindra Kralik
*/

#include <stdio.h>

int main(void)
{
    float f1 = 0.0f, f2 = 0.0f;
    float fd = 0.0f;
    int i = 1;
    char ch, op = '\0';

    printf("Enter an expression: ");

    /* Read first number into f1 */
    ch = getchar();

    while (ch >= '0' && ch <= '9')
	{
        f1 = f1 * 10.0f + (ch - '0');
        ch = getchar();
    }

    if (ch == '.')
	{
        while ((ch = getchar()) >= '0' && ch <= '9')
		{
            i *= 10;
            fd += (float)(ch - '0') / i;
        }
        f1 += fd;
        fd = 0.0f;
        i = 1;
    }

    /* Process remaining operators and numbers */
    while (ch != '\n') {

        op = ch;          /* store operator */
        f2 = 0.0f;        /* reset second number */

        ch = getchar();   /* read first digit of f2 */

        /* read integer part of f2 */
        while (ch >= '0' && ch <= '9')
		{
            f2 = f2 * 10.0f + (ch - '0');
            ch = getchar();
        }

        /* read decimal part of f2 */
        if (ch == '.')
		{
            while ((ch = getchar()) >= '0' && ch <= '9')
			{
                i *= 10;
                fd += (float)(ch - '0') / i;
            }
            f2 += fd;
            fd = 0.0f;
            i = 1;
        }

        /* perform calculation */
        switch (op) {
            case '+': f1 += f2; break;
            case '-': f1 -= f2; break;
            case '*': f1 *= f2; break;
            case '/':
                if (f2 == 0) {
                    printf("Division by zero is not valid.\n");
                    return 1;
                }
                f1 /= f2;
                break;
        }
    }

    printf("The value of the expression is %.2f\n", f1);
    return 0;
}

/* #include <stdio.h>

int main(void)
{
    float f1 = 0.0f, f2 = 0.0f;
    char op;

    printf("Enter an expression: ");
    scanf("%f", &f1);  // first number

    // loop reads operator + number repeatedly
    while(scanf(" %c%f", &op, &f2) == 2)
    {
        switch(op)
        {
            case '+': f1 += f2; break;
            case '-': f1 -= f2; break;
            case '*': f1 *= f2; break;
            case '/': 
                if(f2 == 0.0f)
                {
                    printf("Division by zero is not valid.\n");
                    return 1;
                }
                f1 /= f2; 
                break;
            default: 
                printf("Invalid operator.\n"); 
                return 1;
        }
    }

    printf("The value of the expression is %.2f\n", f1);
    return 0;
} */