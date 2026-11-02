#include <stdio.h>

void problem1(int *a, int size)
{
    int target;
    printf("Enter the num : ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++)
    {
        if (a[i] == target)
        {
            printf("Target Found ! , %d\n", a[i]);
            break;
        }
    }
}
void problem2(int *a, int size)
{
    int target;
    int mid;
    printf("Enter the num : ");
    scanf("%d", &target);
    int l = 0, h = size - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (target == a[mid])
        {
            printf("Target found ! , %d\n", a[mid]);
            break;
        }
        else if (target < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
}
void problem3(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size - 1; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void problem4(int a[], int size)
{
    int min_idx;
    for (int i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }
    printf("Sorted Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void problem5(){

}
int main()
{
    int arr[10] = {1, 2, 4, 6, 3, 6, 9, 2, 9, 7};
    int size = 10;
    int choice;
    printf("Enter the choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("----------Linear Search----------\n ");
        problem1(arr, size);
        printf("----------Binary Search----------\n ");
        problem2(arr, size);
    }
    break;
    case 2:
    {
        printf("-----------Bubble Sort-----------\n");
        problem3(arr, size);
    }
    break;
    case 3:
    {
        printf("-----------Selection Sort-----------\n");
        problem4(arr, size);
    }
    break;
    case 4:
    {
        printf("------------Insertion Sort------------\n");
        problem5(arr, size);
    }
    default :
    printf("Invalid choice");
    }

}
