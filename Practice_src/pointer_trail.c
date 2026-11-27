// #include <stdio.h>
// void swaping(int *ptr1, int *ptr2)
// {
//     // Swaping two numbers
//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
//     printf("Swaping Two numbers using pointers\n");
//     printf("number1 = %d\n", *ptr1);
//     printf("number2 = %d\n", *ptr2);
// }
// int main()
// {
//     int *ptr1, *ptr2;
//     int *ptr3;
//     int num1 = 10, num2 = 20;
//     ptr1 = &num1;
//     ptr2 = &num2;
//     printf("Address number1 = %d \n", ptr1);
//     printf("Address number2 = %d \n", ptr2);
//     printf("number1 = %d \n", *ptr1);
//     printf("number2 = %d \n", *ptr2);
//     // Standard way
//     swaping(ptr1, ptr2);
//     // legal approach / Modern Approach /Compound literals
//     swaping(&(int){10}, &(int){20});
//     //Pointer Address
//     printf("Pointer Address of num1 : %p & Pointer value address : %p\n",*ptr1,ptr1);
//     printf("Pointer Address of num2 : %p & Pointer value address : %p\n",*ptr2,ptr2);
//     //String initialise through pointer
//     char *str = "Hello World\0";
//     /*Observation : In 'char *',we dont need to write *str , if we do so, it shows error of Segmentation fault.
//     According to me , when we write *str it create memory allocation and assign first character in the block and assign next
//     character in the next block of memmory till \0 character.
//     * It is not a pointer who can store address and do manipulation.
//     */
//     printf("String message print through pointer : %s\n",str);
//     char **ptrstr = &str;
//     /*New Observation : It is a pointer , I dont understand how it access string without dereference .
//     for printing the pointer string and we need access the data inside the pointer.
//     So we need create pointer of pointers '**ptrstr' pass the address of pointer string.
//     */
//     printf("Pointer accessing the str: %s & Address : %p\n",*ptrstr,*ptrstr,"\n Pointer of Pointer address %p",**ptrstr);
//     printf("Pointer stored pointers address : %p \nMemmory address : %d\n",*ptrstr,*ptrstr);
//     printf("Address of the data stored : %d",ptrstr);
//     //Void type in pointer trial
//     char str_1[] = "Void data store trail";
//     /*Void pointer is just used for storing the address as it doessnt required the byte or size the original variables holds.
//     If we try to dereference it , it will cause an error as how much bytes required by the variables/data.
//     So we use void type for storing the address and size.
//     In case if we want print the data , we have to specify the data type.
//     Using type conversion .
// */
//     void *void_ptr = &str_1;
//     printf("\nAddress of the Data stores in the void type : %d",void_ptr);
//     printf("\nData stores in the void type : %s",(char *)void_ptr);
//     return 0;
// }
#include <stdio.h>

void swaping(int *ptr1, int *ptr2)
{
    // Swap two numbers through their pointers
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("Swaping Two numbers using pointers\n");
    printf("number1 = %d\n", *ptr1);
    printf("number2 = %d\n", *ptr2);
}

// Pointer constant experiment 1.
void Experiment1()
{
    int xc = 10;
    int yc = 20;
    int *const ptr = &xc; // constant pointer to int
    printf("\nValue of x: %d\n", *ptr);

    *ptr = 15; // can change the value at address
    printf("Modified value of x: %d\n", *ptr);

    // ptr = &yc;  // changing pointer address is not allowed
}
void Experiment2()
{
    int xc = 10;
    int yc = 20;
    const int *ptr = &xc;
    printf("Original address of ptr : %p\n", ptr);
    // *ptr = 100; changing pointer value is not allowed

    ptr = &yc;
    printf("Modified address of ptr : %p\n", ptr);
}
void Experiment3()
{
    int xc = 10;
    int yc = 20;
    const int *const ptr = &xc;
    printf("Original address of ptr : %p\n", ptr);
    // *ptr = 100; changing pointer value is not allowed

    // ptr =  &yc; changing pointer address is not allowed
}
int main(void)
{
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Address number1 = %p\n", (void *)ptr1);
    printf("Address number2 = %p\n", (void *)ptr2);
    printf("number1 = %d\n", *ptr1);
    printf("number2 = %d\n", *ptr2);

    // Standard call with pointer variables
    swaping(ptr1, ptr2);

    // C99 compound literal: creates temporary ints in memory and passes their addresses
    swaping(&(int){10}, &(int){20});

    printf("num1 = %d, ptr1 = %p\n", *ptr1, (void *)ptr1);
    printf("num2 = %d, ptr2 = %p\n", *ptr2, (void *)ptr2);

    // String literal lives in static/read-only memory; str holds address of 'H'.
    // str is a char pointer (supports pointer arithmetic like str + 1), not a character.
    // *str is char 'H' (ASCII 72); passing *str to %s causes a segfault.
    const char *str = "Hello World";
    printf("String message print through pointer : %s\n", str);

    // ptrstr holds the address of pointer variable str.
    // *ptrstr yields str (address of 'H'), so %s prints "Hello World".
    // **ptrstr yields the char 'H'.
    char **ptrstr = &str;
    printf("Pointer accessing the str: %s & String Address : %p\n", *ptrstr, (void *)*ptrstr);
    printf("Address of str (stored in ptrstr) : %p\n", (void *)ptrstr);

    // void * holds only an address—no type or byte size.
    // Direct dereference (*void_ptr) fails to compile; cast before %s or dereferencing.
    // Use \n (not \0) to start a new line, since \0 terminates the format string early.
    char str_1[] = "Void data store trail";
    void *void_ptr = str_1;
    printf("\nAddress of the Data stores in the void type : %p\n", void_ptr);
    printf("Data stores in the void type : %s\n", (char *)void_ptr);

    // const trail
    const int x = 10;
    // x = 100; invalid as constant variables.
    printf("\nConstant variables : %d\n", x);
    // int *ptr_const = &x; // Warning message shown but still works :>

    //*ptr_const = 100; The modification causes undefined behavior
    printf("Constant variable data changed through pointer : %d , x : %d\n ", *ptr_const, x);

    // 1. Experiment:1 keeping pointer type const
    Experiment1();
    // Conculsion : We ae not able to change the memmory address but we can change the value inside it .

    // Experiment 2: kepping pointer variable const
    Experiment2();
    // Conculsion : We are able to change the memmory address but we can't change the value inside it .

    // Experiment 3: kepping pointer and pointer type const
    Experiment3();
    // Conculsion : Neither we can change the address nor value inside it.
    return 0;
}