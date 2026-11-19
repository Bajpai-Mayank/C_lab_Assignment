#include <stdio.h>

int main(void){
    char str1[] = "Hello World!\0";
    //(Character)Array way to print the string 
    printf("Array approach to display the String %s\n",str1);
    //Pointer way
    char *str2= "Hello World Pointer\0";
    printf("Pointer approach to display the String %s\n",str2);
    //String Function Application
    
    return 0;
}