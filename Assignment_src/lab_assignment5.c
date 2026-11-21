#include <stdio.h>
#include <stdlib.h>
void problem1(const int arr[], int size)
{
    printf("\n Reverse Array : ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void problem2(int arr[], int size)
{
    int idx, value;
    printf("Enter the index value : ");
    scanf("%d", &idx);
    printf("\nEnter the value : ");
    scanf("%d", &value);
    int temp = arr[idx];
    arr[idx] = value;
    for (int i = idx; i < size; i++)
    {
        int k = arr[idx + 1];
        arr[idx + 1] = temp;
        temp = k;
    }
    printf("\n Array after inserting the elment : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void problem4(const int arr[], int size)
{
    int target;
    printf("\nEnter the element : ");
    scanf("%d", &target);
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            printf("Element found ! idx : %d , value : %d", i, arr[i]);
            exit(0);
        }
    }
    printf("Element Not found !");
}
void problem5(const int arr[], int size)
{
    int low = 0, high = size - 1, target, mid;
    printf("\nEnter the element : ");
    scanf("%d", &target);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (target == arr[mid])
        {
            printf("\nElement found ! idx : %d , value : %d \n", mid, arr[mid]);
            exit(0);
        }
        else if (target < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    printf("Element Not found !\n");
}
void problem6(const int arr[], int size)
{
    float sum, avg;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("Sum : %.2f\n", sum);
    printf("Average : %.2f\n", (sum) / size);
}
void problem8(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int is_swap = 0;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                is_swap = 1;
            }
        }
        if (!is_swap)
        {
            break;
        }
    }
    printf("Min value : %d Max value : %d \n", arr[0], arr[size - 1]);
}
/*
void problem9(){
int arr1[] = {1,2,7,8,8,9,5,1,2,7};
int arr2[] = {1,71,32,8,66,9,5,3,4,7};
int size1 = sizeof(arr1)/sizeof(arr1[0]);
int size2 = sizeof(arr2)/sizeof(arr2[0]);
int arr3[size1+size2];
printf("\n Intersection : ");
for(int i=0;i<size1;i++){
for(int i=0;i<size1+size2;i++){
if(arr3[i]!=)
}

}*/
// IDK
void problem10()
{
    int arr1[] = {1, 2, 7, 8, 8, 9, 5, 1, 2, 7};
    int arr2[] = {1, 71, 32, 8, 66, 9, 5, 3, 4, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[size1 + size2];
    int count = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[count++] = arr1[i];
            }
        }
    }

    for (int i = 0; i < size1; i++)
    {
        int is_same = 1;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                is_same = 0;
            }
        }
        if (is_same)
        {
            arr3[count++] = arr1[i];
        }
    }
    for (int i = 0; i < size1 + size2; i++)
    {
        printf(" %d ", arr3[i]);
    }
}
void problem11()
{
    int a[] = {1, 2, 3};
    int b[] = {1, 2, 3};
    printf("Add : ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i] + b[i]);
    }
    printf("\nTranspose : ");
    for (int i = 0; i < 3; i++)
    {
        int temp = a[i];
        a[i] = a[3 - i];
        a[3 - i] = temp;
        printf("%d ", a[i]);
    }
    int sum = 0;
    printf("\n Multiple : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += a[i] * b[j];
        }
        printf("%d ", sum);
    }
    printf("\n");
}
void problem12()
{
    int arr[] = {1, 2, 7, 8, 8, 9, 5, 1, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        int is_swap = 0;
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                is_swap = 1;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void problem14(int arr[], int size)
{
    double mean, median, mode;
    for (int i = 0; i < size; i++)
    {
        mean += arr[i];
    }
    mean = mean / size;
    printf("Mean Value : %lf\n ", mean);
    if (size % 2 == 0)
    {
        median = arr[size / 2];
        printf("Median value : %lf\n ", median);
    }
    else
    {
        median = (arr[(size) / 2] + arr[(size / 2) + 1]) / 2;
        printf("Median value : %lf\n", median);
    }
    mode = 3 * median - 2 * mean;
    printf("Mode value : %lf", mean);
}

void problem16(int arr[], int size)
{
    int shift = 0;
    printf("Enter the shift value : ");
    scanf("%d\n", shift);
    shift = shift - 1;
    while (shift != -1)
    {
        arr[shift] = arr[size - shift];
        arr[size - shift] = -1;
        shift--;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void problem17(int arr[], int size)
{
}
int main()
{
    int choice;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the choice : ");
    scanf(" %d", &choice);
    switch (choice)
    {
    case 1:
        problem1(arr, size);
        break;
    case 2:
        problem2(arr, size);
        break;
    case 3:
    case 4:
        problem4(arr, size);
        break;
    case 5:
        problem5(arr, size);
        break;
    case 6:
        problem6(arr, size);
        break;
    case 7:
        int arr1_[] = {20, 30, 50, 70, 99, 100, 191, 88, 10, 67};
        problem8(arr1_, size);
        break;
    case 8:
        problem10();
        break;
    case 9:
        problem11();
        break;
    case 10:
        problem12();
        break;
    case 11:
        problem14(arr, size);
        break;
    case 12:
        problem16(arr, size);
        break;
    case 13:
        problem17(arr, size);
        break;

    default:
        printf("Invalid choice!");
    }
    return 0;
}
