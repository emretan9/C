#include<stdio.h>
#include <string.h>



int main(){
char identity_number[12];
int count=0;
printf("enter id: ");
scanf("%s",identity_number);

int toplam1=(identity_number[0]+identity_number[2]+identity_number[4]+identity_number[6]+identity_number[8])-48*5;
int toplam2=(identity_number[1]+identity_number[3]+identity_number[5]+identity_number[7])-48*4;
int cikar=(toplam1*7)-toplam2;



if(identity_number[0] == '0'){
    printf("ID number cannot start with 0 !!");
}
else if(cikar%10 != identity_number[9]-48 && (toplam1+toplam2+identity_number[9]-48)%10 != identity_number[10]-48)
    printf("invalid ID");
else{ 
    for(int i=0;i<=strlen(identity_number);i++){
     if(identity_number[i]>=9 ){
        count=1;
    } 
 }
}

if(count==1) printf("valid ID");



}
