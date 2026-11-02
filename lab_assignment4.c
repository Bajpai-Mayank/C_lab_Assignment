#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int problem1(int n){
if(n == 0){
 return 1;
}
return  problem1(n-1)*n;
}

int  problem2(int a){
int k=0;
for(int i=1;i<=a;i++){
if(a%i == 0){
k++;
}
}
return k;
}

void problem3(){
int sum=0;
for(int i=1;i<=500;i++){
int count = 1+ (int)log10(abs(i));
int temp=i;
while(temp!=0){
sum += (int)pow(temp%10,count);
temp /=10;
}
printf("num : %d -> Armstrong value : %d \n",i,sum);
sum=0;
}
printf("\n");
}

void problem4(int a, int b){
int min =fmin(a,b);
for(int i=min;i>=1;i--){
if( a%i == 0 && b%i == 0){
printf("GCD and HCF : %d",i);
break;
}
}
}

void problem5(){
unsigned long int a=0,b=1;
printf("%d , %d ",a,b);
unsigned long int sum=0;
for(int i=1;i<=50;i++){
sum = a+b;
printf(", %d ",sum);
int temp = b;
b=sum;
a=temp;
}
}

void problem6(){
int n[6];
for(int i=0;i<24/4;i++){
printf("Enter the 1st temperature recorded in %d : \n",(i+1)*4);
scanf("%d\n",&n[i]);
}
for(int i=0;i<6;i++){
printf("Temperature recorded :%d\n ",n[i]);
}
}

void problem7(){
int a=0,b=1,sum=0;
int i=1;
printf("%d , %d",a,b);
while(i<=10){
sum =a + b;
printf(" , %d",sum);
int temp=b;
b=sum;
a=temp;
i++;
}
printf("\n");
}

void problem8(){
int l,td=0;
printf("Enter the litres of fuel : \n");
scanf("%d",&l);
for(int i=l;i>=0;i--){
if(i%2 == 0){
td+=10;
printf("you travelled 10 kms, fuel left %d Litres\n",i);
}
}
printf("Total distance travelled %d \n",td);
}

void problem9(){
double interest=0.05;
double amount = 10000.0;
int year =0;
while(amount <=15000){
amount +=amount*interest;
year+=1;
printf("Amount increament in  %d year : %lf\n",year,amount);
}
printf("Total year required to exceed : %d\n",year);
} 
int main(){
int choice;
printf("Enter the choice :\n ");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Solved Using Recursion \n");
int x;
printf("Enter the number : \n");
scanf("%d",&x);
printf("Fcatorial : %d\n",problem1(x));
break;
case 2:
int n;
printf("Enter the number : \n");
scanf("%d",&n);
if(problem2(n) == 2){
printf("Prime No. %d \n ",n);
}
else{
printf("Not-Prime No. %d \n",n);
} 
break;
case 3:
printf("Armstrong Number : \n");
problem3();
break;
case 4:
int num1,num2;
printf("Enter the num1 : \n");
scanf("%d",&num1);
printf("Enter the num2 : \n");
scanf("%d",&num2);
problem4(num1,num2);
break;
case 5:
problem5();
break;
case 6:
problem6();
break;
case 7:
problem7();
break;
case 8:
problem8();
break;
case 9:
problem9();
break;
default:
printf("Invalid Choice\n");
}
return 0;
}
