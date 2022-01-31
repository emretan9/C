#include<stdio.h>
int main(){

float num1,num2,num3,multip,mean,kucuk;
int sum;
printf("ENTER A NUMBER IN ORDER TO SEE MULTIPLICATION,SUM AND MEAN OF THE NUM:\n");
scanf("%f %f %f",&num1,&num2,&num3);

multip=num1 * num2 * num3;
sum=num1+num2+num3;
mean=(num1+num2+num3)/3;

if(num1<num2 ||  num1<num3) printf("smaller num is %f \n:",num1);
  else if(num2<num1 || num2<num3 ) printf("smaller num is %f \n:",num2);
    else printf("smaller num is %f \n:",num3);

printf("%f \n %f \n %f \n",num1,num2,num3);
printf("sum of the data's : %d \n",sum);
printf("multiplication of the data's : %.3f \n",multip);
printf("mean of the data's : %.3f \n",mean);










}