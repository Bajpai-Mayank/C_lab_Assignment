#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void  plus_one(int **arr[] , int *len){
int k=0,num=0;
while(k<*len){
num = num*10 + (*arr)[k];
k++;
}
printf("Value : %d",&num);
num += 1;
int n_len = (num==0)? 1 :  1 + log10(num);
int *temp = realloc(*arr,(*len) * sizeof(int));
if( temp != NULL){
*arr = temp;
}
*len = n_len;
int i=n_len-1;
while(num!=0){
(*arr)[i--] = num%10;
num=num/10;
}
printf(arr);
}

int main(){
int num;
printf("Enter the number/n");
scanf("%d",&num);
int size = (num==0)? 1 :  1 + log10(num);
int *arr = malloc(len * sizeof(int));
int i=0;
while(num!=0){
arr[i++] = num%10;
num=/10;
}
plus_one(&arr,&size);
return 0;
}
