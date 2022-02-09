#include<stdlib.h>
#include<stdio.h>
int buyukSayi(int dizi[5]){
int buyuk=0;
for(int j=0;j<5;j++){
 if(buyuk<dizi[j]){
    buyuk=dizi[j];
     }
   }
return printf("biggest number=%d",buyuk);


}
int main(){

int dizi[5]={};

for(int i=0;i<5;i++){
    printf("Enter 5 numbers:");
    scanf("%d",&dizi[i]);
}
printf("\nArray is:");
for(int i=0;i<5;i++){
printf("%d",dizi[i]);
}
buyukSayi(dizi);





}