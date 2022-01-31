#include<stdio.h>
int main(){

int arr1[5]={};
float avg=0;
int total=0;


for(int j=0;j<5;j++){
    printf("enter %d. array of numbers:",j+1);
    scanf("%d",&arr1[j]);   
}
for(int j=0;j<5;j++)
{
printf("%d",arr1[j]); 
}
     
for(int j=0;j<5;j++)
{
    total=total+arr1[j]; 
}
for(int j=0;j<5;j++){
   avg=total/5;
}
     printf("\ntotal=%d\n",total);
     printf("avg=%.2f",avg);




}