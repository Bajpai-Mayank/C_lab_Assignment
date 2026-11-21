#include <stdio.h>
int main(){
int num;
printf("Enter the number : ");
scanf("%d",&num);
int Org_num = num , rev = 0 , digit =0;
while(num > 0){
digit = num % 10;
rev = rev*10 + digit;
num = num / 10;
}
if(Org_num == rev){
printf("Palindrome Number %d \n",Org_num);
}
else{
printf("Not -Palindrome Number %d \n",Org_num);
}
return 0;
}
