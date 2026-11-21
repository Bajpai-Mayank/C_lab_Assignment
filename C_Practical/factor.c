#include <stdio.h>
int main(){
int x;
printf("Enter the Number : ");
scanf("%d",&x);

if(x%3 == 0 && x%5 != 0 && x%7 != 0 && x>=10 &&x<=100){
printf("Number is divisible by 3 and not divisible 35 : %d\n",x);
}
else{
printf("Number is not satisfied the condition  : %d\n", x);
}
return 0;
}
