#include<stdio.h>
int main(){
int sayi;
int fakSonuc=1;
printf("enter number to get factorial:");
scanf("%d",&sayi);
int kulSayi=sayi;
while(sayi>=0){
    if(sayi==0){
        fakSonuc*=1;
    }
    else
    {
        fakSonuc*=sayi;
    }
 sayi--;
}
printf("%d ! = %d",kulSayi,fakSonuc);
}   
