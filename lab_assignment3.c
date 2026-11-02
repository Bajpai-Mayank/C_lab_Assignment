#include <stdio.h>

void problem1()
{
    printf("Enter the character : \n");
    int x = getchar();
    if (x >= 97 && x <= 123)
    {
        printf("Small letter %d \n", x);
    }
    else if (x >= 65 && x <= 90)
    {
        printf("Capital letter %d \n", x);
    }
    else if (x >= 48 && x <= 57)
    {
        printf("Number %d \n", x);
    }
    else
    {
        printf("Special Symbols %d \n", x);
    }
}

void problem2()
{
    int a, b, c;
    printf("Enter the 1st number : \n");
    scanf("%d", &a);

    printf("Enter the 2nd number : \n");
    scanf("%d", &b);

    printf("Enter the 3rd number : \n");
    scanf("%d", &c);
    // Using if-else

    if (a > b && a > c)
    {
        printf("Greatest Value %d  \n", a);
    }
    else if (b > c && b > c)
    {
        printf("Greatest Value %d  \n", b);
    }
    else
    {
        printf("Greatest Value %d \n", c);
    }
    // Using Ternary-operator

    int max_value = (a > b && b > c) ? a : (b > c && c > a) ? b
                                                            : c;

    printf("Greatest Value %d \n", max_value);
}
void problem3()
{
    int a, b;
    char c;

    printf("Enter the 1st number : \n");
    scanf("%d", &a);
    printf("Enter the operator : \n");
    getchar();
    c = getchar();
    printf("Enter the 2nd number : \n");
    scanf("%d", &b);

    switch (c)
    {
    case '+':
        printf("Sum : %d \n", a + b);
        break;

    case '-':
        printf("Substract : %d \n", a - b);
        break;
    case '*':
        printf("Multiple : %d \n", a * b);
        break;
    case '/':
        printf("Divide : %d \n", a / b);
        break;
    default:
        printf("Invalid operator \n");
    }
}

void problem4()
{
    int n;
    printf("Enter the Month number :\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("January \n");
        break;
    case 2:
        printf("february \n");
        break;
    case 3:
        printf("March \n");
        break;
    case 4:
        printf("April \n");
        break;
    case 5:
        printf("May \n");
        break;
    case 6:
        printf("June \n");
        break;
    case 7:
        printf("July \n");
        break;
    case 8:
        printf("August \n");
        break;
    case 9:
        printf("September \n");
        break;
    case 10:
        printf("October \n");
        break;
    case 11:
        printf("November \n");
        break;
    case 12:
        printf("December \n");
        break;
    default:
        printf("Invalid month number \n");
    }
}
void problem5()
{
    int n;
    printf("Enter the number : \n");
    scanf("%d", &n);
    // if - else
    if (n > 0)
    {
        printf("Positive Number \n");
    }
    else
    {
        printf("Negative Number \n");
    }
    if (n % 2 == 0)
    {
        printf("Even Number \n");
    }
    else
    {
        printf("Odd Number \n");
    }
    // char *str1[] = (n>0)? "positive" : "Negative";
    // char *str2[] = (n%2 == 0)? "Even Number" : "odd Number";
    // printf("%s",str1);
    // printf("%s",str2);
}
void problem6()
{
    int n;
    printf("Enter the number : \n");
    scanf("%d", &n);
    if (n % 40)
    {
        printf("Number is divisible by 5 & 8\n");
    }
    else
    {
        printf("Number is not divisible by 5 & 8\n");
    }
}

void problem7()
{
    int n;
    printf("Enter the number of days members late to submit : \n");
    scanf("%d", &n);

    if (n <= 5)
    {
        printf("Fine charged : %d", n * 0.50);
    }
    else if (n <= 10)
    {
        printf("fine charged : %d", 5 * 0.50 + (n - 5) * 1);
    }
    else if (n < 30)
    {
        printf("fine charged : %d", 5 * 0.50 + 5 * 1 + (n - 10) * 5);
    }
    else
    {
        printf("Your Membership has been canceled and fine charged : %d", 5 * 0.5 + 5 * 1 + (n - 10) * 5);
    }
}
int main()
{
    problem1();
    problem2();
    problem3();
    problem4();
    problem5();
    problem6();
    problem7();
    return 0;
}
