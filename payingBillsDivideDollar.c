#include<stdio.h>
int main(){
int dollar;
printf("how many dollars you want to divide: ");
scanf("%d",&dollar);

printf("TOTAL AMOUNT : %d \n" ,dollar);

printf("$20 bills: %d \n",dollar/20);
dollar=dollar%20;

printf("$10 bills: %d \n",dollar/10);
dollar=dollar%10;

printf("$5 bills: %d \n",dollar/5);
dollar=dollar%5;

}
