#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// Perfect Number with its factor
void problem1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("\n%-18d", n);
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("%d ", i);
            }
        }
    }
}
// Code can show issue in different terminal (Bug) like VS code in case 2 Roll Dice Game.
int rollDice()
{
    return (rand() % 6) + 1;
}
void rollDiceGame(int *pa, int *pb)
{
    int attempt, roll;
    for (int i = 1; i <= 12; i++)

    {
        printf("\n Enter : ");
        scanf("%d", &attempt);
        if (attempt == 1)
        {
            roll = rollDice();
            *pa += roll;
            printf("  -> Player A rolled %d (Total: %d)\n", roll, *pa);
        }
        else if (attempt == 2)
        {
            roll = rollDice();
            *pb += roll;
            printf("  -> Player B rolled %d (Total: %d)\n", roll, *pb);
        }
        else
        {
            printf("Invalid request! \n");
            i--;
        }
    }
}
// Bank Transaction , Deposit and Withdraw
static int transc = 0;
static double deposit = 0;
static double withdraw = 0;
static double amount = 0;

void Deposit()
{
    amount += deposit;
    transc++;
}
void Withdraw()
{
    if (withdraw > amount)
    {
        printf("Aukat me raho!!\n");
        return;
    }
    amount -= withdraw;
    transc++;
}
// Fibonacci Series nth factorial
unsigned long fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}
//Factorial 
unsigned long long factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
//probabilities Calculation
//factorial function code already written! 
 double nCr(int n , int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}
unsigned long long power(int n , int exp){
    if(n == 0){
        factorial(n);
    }
    return n*power(n , exp-1);
}
double calculateProbability(int n , int p , int r){
    return nCr(n,r)/(double)pow(2.0,n);
}
int main()
{
    int choice;
    printf("Enter the choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        int limit;
        printf("Enter the limit : ");
        if (scanf("%d", &limit) >= 1)
        {
            printf("Perfect Number %10s", "Factor");
            for (int i = 1; i <= limit; i++)
            {
                problem1(i);
            }
        }
    }
    break;
    case 2:
    {
        int a = 0, b = 0;
        char ply_a[100];
        char ply_b[100];
        while (getchar() != '\n')
            ;
        printf("==============DICE GAME============\n");
        printf("Player A: Enter your Name : ");
        fgets(ply_a, sizeof(ply_a), stdin);
        ply_a[strcspn(ply_a, "\n")] = 0;
        printf("Player B: Enter your Name : ");
        fgets(ply_b, sizeof(ply_b), stdin);
        ply_b[strcspn(ply_b, "\n")] = 0;
        printf("\n %s : Enter 1 to throw dice \n %s :  Enter 2 to throw dice ", ply_a, ply_b);
        rollDiceGame(&a, &b);
        if (a > b)
        {
            printf("%s won with score %d ! \n", ply_a, a);
        }
        else if (b > a)
        {
            printf("%s won with score %d ! \n", ply_b, b);
        }
        else
        {
            printf("Tie bro same score %d! \n", a);
        }
    }
    break;
        // Guess The number already solved So I'm skipping in it.
        // You can find the src code with name guessnumber.c
    case 3:
    {
        while (1)
        {
            int ch = 0;
            printf("\n 1.Amount \n 2.Deposit \n 3.Withdraw \n 4.Transaction \n 5.Exit");
            printf("\n Enter the choice : ");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf("Current Amount : %.2lf\n", amount);
                break;
            case 2:
                printf("Enter the deposit Amount : ");
                scanf("%lf", &deposit);
                Deposit();
                printf("\n Updated Amount : %.2lf", amount);
                break;
            case 3:
                printf("Enter the withdraw Amount : ");
                scanf("%lf", &withdraw);
                Withdraw();
                printf("\n Updated Amount : %.2lf", amount);
                break;
            case 4:
                printf("Total no. of Transaction include deposit and withdraw : %d", transc);
                break;
            case 5:
                printf("Exting ....\n");
                goto exit;
                break;
            default:
                printf("Invalid Choice! \n ");
            }
        }
    exit:;
    }
    break;
    case 4:
    {
        int n;
        printf("Enter the value : ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Error: Please enter a non-negative integer.\n");
        }
        else if (n > 7)
        {
            printf("Error: Input too large (fibonacci(%d)! overflows 64-bit integer).\n", n);
        }
        else
        {
            unsigned long fibo_value = fibonacci(n);
            unsigned long long fact_value = factorial(fibo_value);
            printf("Fibonacci of index : %d is -> %lu\n", n, fibo_value);
            printf("Factorial of fibonacci's value at index : %d is -> %llu\n", n, fact_value);
        }
    }
    break;
    case 5:
    {
        int n,p,r;
        printf("Enter the total number of students: ");
        scanf("%d",&n);
        printf("Enter the number of students in a committee: ");
        scanf("%d",&r);
        printf("Enter the number of possible such committees for which probabilities need to be calculated: ");
        scanf("%d",&p);
        if(n < 0 || p < 0 || r <0){
            printf("Error: Please enter a non-negative integer.\n");
        }
        else {
        double probability = calculateProbability(n,p,r);
        printf("The probability of selecting an r-member committee from n students : %.2Lf",probability);
        }
    }
    break;
    default:
        printf("Invalid Choice!");
    }
}