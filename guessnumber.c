#include <stdio.h>
#include <stdlib.h>
int main(){
int guess , random;
random = (rand() % 100)+1;
while(1){
printf("Enter the number : ");
scanf("%d",&guess);
if( guess > random){
printf("Number is too high !\n");
}
else if(guess < random){
printf("Number is too low !\n");
}
else{
printf("You won the game !!\n");
break;
}
}
}
