#include <stdio.h>
void swaping(int *ptr1, int *ptr2)
{
    // Swaping two numbers
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Swaping Two numbers using pointers\n");
    printf("number1 = %d\n", *ptr1);
    printf("number2 = %d\n", *ptr2);
}

int main()
{
    int *ptr1, *ptr2;
    int *ptr3;
    int num1 = 10, num2 = 20;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Address number1 = %d \n", ptr1);
    printf("Address number2 = %d \n", ptr2);
    printf("number1 = %d \n", *ptr1);
    printf("number2 = %d \n", *ptr2);
    // Standard way
    swaping(&num1, &num2);
    // legal approach / Modern Approach /Compound literals
    swaping(&(int){10}, &(int){20});
    //Pointer Address
    printf("Pointer Address of num1 : %p & Pointer value address : %p\n",*ptr1,ptr1);
    printf("Pointer Address of num2 : %p & Pointer value address : %p\n",*ptr2,ptr2);
    //String initialise through pointer
    char *str = "Hello World\0";
    /*Observation : In 'char *',we dont need to write *str , if we do so, it shows error of Segmentation fault.
    According to me , when we write *str it create memory allocation and assign first character in the block and assign next 
    character in the next block of memmory till \0 character.
    * It is not a pointer who can store address and do manipulation.
    */
    printf("String message print through pointer : %s\n",str);
    char **ptrstr = &str;
    /*New Observation : It is a pointer , I dont understand how it access string without dereference .
    for printing the pointer string and we need access the data inside the pointer.
    So we need create pointer of pointers '**ptrstr' pass the address of pointer string.
    */
    printf("Pointer accessing the str: %s & Address : %p\n",*ptrstr,*ptrstr,"\n Pointer of Pointer address %p",**ptrstr);
    printf("Pointer stored pointers address : %p \nMemmory address : %d\n",*ptrstr,*ptrstr);
    printf("Address of the data stored : %d",ptrstr);


    return 0;
}
