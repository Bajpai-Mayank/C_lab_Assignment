#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*  Practical Lab Solution by me.*/
// int main(){
//     char str[100];
//     //User Input
//     printf("Enter the string : ");
//     scanf("%99s",str);
//     //length of the string
//     printf("length of Original String = %d\n",(int)strlen(str));
//     int len = 0;
//     //Compressed String
//     printf("Compressed string : ");
//     for (int i = 0; str[i] != '\0'; ) {
//         int count = 1;
//         while (str[i + count] == str[i]) {
//             count++;
//         }
//         //printing the compressed string
//         printf("%c%d", str[i], count);

//         // len += 1 + snprintf(NULL, 0, "%d", count);
//         len+=2;
//         i += count;
//     }
//     //Conditional checking of the string Compressed or not.
//     if ((int)strlen(str) > len) {
//         printf("\nLength of the Compressed String = %d\n",len);
//     } else {
//          printf("\nLength of the Original String = %d\n",(int)strlen(str));
//     }

//     return 0;
// }
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%s",str);
    printf("length of Original String = %d\n",(int)strlen(str));
    int count = 0;
    int len =0;
    char *snstr = (char *)malloc(100*sizeof(char));
    for(int i=0;i<(int)strlen(str);i++){
        count = 0;
        for(int j=i;j<(int)strlen(str);j++){
            if(str[i] == str[j] && strchr(snstr,str[i]) == NULL){
            count++;
            }
        }
        if(strchr(snstr,str[i]) == NULL){
        len+= snprintf(snstr+len,100+len,"%c%d",str[i],count);
        }
    }
    printf("Compressed String : %s",snstr);
    if((int)strlen(str) > len){
        printf("\nLength of the Compressed String = %d\n",len);
    }
    else{
         printf("\nLength of the Original String = %d\n",len);
    }

    return 0;
}