#include <stdio.h>
#include <string.h>
int main(void){
    char str1[] = "Hello World!";
    //(Character)Array way to print the string 
    printf("Array approach to display the String %s\n",str1);
    //Pointer way
    char buffer[50] = "Pointer attach with";
    // Small doubt what if we want to pass the address of it .
    // char *strc = &buffer;
    //It works but its not compatible pointer type .
    char *strc = buffer;
    char *str2= " Pointer";
    printf("Pointer approach to display the String %s\n",str2);
    //String Function Application
    //String append
    strcat(strc,str2);
    printf("String concat : %s\n",strc);
    //String copy
    strcpy(strc,str2);
    printf("String copy : %s\n",strc);

    return 0;
}