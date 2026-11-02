#include <stdio.h>
void swaping(int *ptr1 , int *ptr2){
// Swaping two numbers 
int temp = *ptr1;
*ptr1 = *ptr2;
*ptr2 =  temp;
printf("Swaping Two numbers using pointers\n");
printf("number1 = %d\n",*ptr1);
printf("number2 = %d\n",*ptr2);
}

int main(){
int *ptr1, *ptr2;
int num1=10,num2=20;
ptr1 = &num1;
ptr2 = &num2;
printf("Address number1 = %d \n",ptr1);
printf("Address number2 = %d \n",ptr2);

printf("number1 = %d \n",*ptr1);
printf("number2 = %d \n",*ptr2);
// Stabdard way
swaping(&num1,&num2);
// legal approach / Modern Approach /Compound literals
swaping(&(int){10},&(int){20});
return 0;
}
