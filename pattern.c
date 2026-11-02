#include <stdio.h>

void pattern1(){
for(int i=1;i<=5;i++){
for(int j=1;j<=i;j++){
printf("* ");
}
printf("\n");
}
}

void pattern2(){
for(int i=1;i<=5;i++){
for(int j=1;j<=5;j++){
if(i<=j){
printf("* ");
}
else{
printf(" ");
}
}
printf("\n");
}
}

void pattern3(){
for(int i=5;i>=1;i--){
for(int j=1;j<=5;j++){
if(i<=j){
printf("* ");
}
else{
printf(" ");
}
}
printf("\n");
}
}
void pattern4(){
for(int i=1;i<=5;i++){
for(int j=1;j<=5;j++){
if(i==j||j==1||j==5){
printf("* ");
}
else{
printf("  ");
}
}
printf("\n");
}
}

void pattern5(){
for(int i=5;i>=1;i--){
for(int j=1;j<=i;j++){
printf("* ");
}
printf("\n");
}
}

void pattern6(){
for(int i=5;i>=1;i--){
for(int j=1;j<=5;j++){
if(i<=j){
if( i == j || i==1 || j==5){
printf("* ");
}
else
{
printf("  ");
}
}
else{
printf(" ");
}
}
printf("\n");
}
}

void pattern7(){
printf("Currently unable to solve");
}
int main(){
printf("Right half pyramid \n");
pattern1();
printf("Inverted half pyramid \n");
pattern5();
printf("Full pyramid \n");
pattern3();
printf("inverted full pyramid \n");
pattern2();
printf("Hourglass Pyramid \n");
pattern2();
pattern3();
printf("Diamond \n");
pattern3();
pattern2();
printf("Hollow Square \n");
pattern4();
printf("Hollow Full pyramid \n");
pattern6();
printf("Inverted hollow Full pyramid \n");
pattern7();
return 0;
}
