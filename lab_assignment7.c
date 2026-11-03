#include <stdio.h>

void problem1(int *a, int size)
{
    int target;
    printf("Enter the num : ");
    scanf("%d", &target);
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == target)
        {
            k = 1;
            break;
        }
    }
    if (k)
    {
        printf("Target value found! , %d", target);
    }
    else
    {
        printf("Target value not found! , %d", target);
    }
}
void problem2(int *a, int size)
{
    int target, k = 0;
    int mid;
    printf("Enter the num : ");
    scanf("%d", &target);
    int l = 0, h = size - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (target == a[mid])
        {
            k = 1;
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
    if (k)
    {
        printf("Target value found! , %d", target);
    }
    else
    {
        printf("Target value not found! , %d", target);
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
//<==================Insertion Sort Alogrithm====================>
// Start with the second item in the list and treat the first item as already sorted.
// Save the current item as the key and look at the item immediately to its left.
// As long as the item on the left is larger than the key, shift that larger item one position to the right.
// Move one more position to the left and repeat the comparison.
// Stop shifting when you find an item smaller than or equal to the key, or when you hit the beginning of the list.
// Drop the key into the empty slot created by the shifts.
// Move to the next unsorted item in the list and repeat the entire process until the end of the list is reached.
void problem5(int a[], int size)
{
    int key = 0;
    for (int i = 1; i < size; i++)
    {
        key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    printf("Sorted Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void problem6()
{
    int a,b,c,n;
    printf("Enter A :");
    scanf("%d",&a);
    printf("Enter B :");
    scanf("%d",&b);
    printf("Enter C :");
    scanf("%d",&c);
    printf("Enter the position  :");
    scanf("%d",&n);
    int x=0;
    int i=1;
    while(n>0){
        if(i%a==0 || i%b==0 || i%c==0){
            printf("%d ",i);
            n--;
            if(n==0){
                x=i;
            }
        }
        i++;
    }
    printf("\n Index %d element is 18 Output: X = %d",i,x);
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
    break;
    case 5:
    {
        printf("------------Divisbility Password------------\n");
        problem6();
    }
    break;
    default:
        printf("Invalid choice");
    }
}
