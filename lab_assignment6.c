#include <stdio.h>
#include <stdlib.h>
void problem1()
{
    int size;
    printf("Enter the size : ");
    scanf("%d", &size);
    int arr[size];
    printf("\n Enter  ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Values sets  ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
        }
        arr[i] = abs(sum - arr[i]);
        sum = 0;
    }
    printf("\n Updated sets  : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
}

void problem2()
{
    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};
    int counter = 0;
    int size = sizeof(a[0]) / sizeof(a[0][0]);
    int total_size = size * size;
    int left = 0, right = size - 1;
    printf("Spiral Order : ");
    while (counter != total_size)
    {
        // Left to Right
        for (int j = left; j <= right - 1; j++)
        {
            printf("%d ", a[left][j]);
            counter++;
        }
        // top to bottom
        for (int i = left; i <= right - 1; i++)
        {
            printf("%d ", a[i][right]);
            counter++;
        }
        // right to left
        for (int j = right; j >= left + 1; j--)
        {
            printf("%d ", a[right][j]);
            counter++;
        }
        // bottom to top
        for (int i = right; i >= left + 1; i--)
        {
            printf("%d ", a[i][left]);
            counter++;
        }
        right--;
        left++;
    }
}
void problem3()
{
}
void problem4()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || i == 2)
            {
                printf("%d ", arr[i][j]);
            }
            else if (j == 0 || j == 2)
            {
                printf("%d ", arr[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void problem5()
{
    int arr[3][3] = {
        {1, 0, 0},
        {0, 7, 0},
        {0, 0, 9}};
    int counter = 0;
    int isnonzero = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j && arr[i][j] != 0)
            {
                counter += 1;
            }
            if (i != j && arr[i][j] != 0)
            {
                isnonzero = 1;
            }
        }
    }
    if (counter == 3 && !isnonzero)
    {
        printf("Diagonal Matrix :> ");
    }
    else
    {
        printf("Non-Diagonal Matrix :(");
    }
}
void problem6(int a[3][3], int b[3][3], int (*c)[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            (*c)[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                (*c)[i][j] += a[j][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int choice;
    printf("Enter the choice  : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        problem1();
        break;
    case 2:
        problem2();
        break;
    case 3:
        problem3();
        break;
    case 4:
        problem4();
        break;
    case 5:
        problem5();
        break;
    case 6:
    { // Curlys added here to allow local variable definitions inside the switch block
        int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int b[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
        int x[3][3], y[3][3];

        // Correctly passing the exact addresses of x and y
        problem6(a, b, &x);
        problem6(b, a, &y);

        int k = 1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (x[i][j] != y[i][j])
                {
                    k = 0;
                    break;
                }
            }
        }

        if (k)
        {
            printf("Commutative \n");
        }
        else
        {
            printf("Not Commutative \n");
        }
        break;
    default:
        printf("Invalid choice \n ");
    }
    }
}
