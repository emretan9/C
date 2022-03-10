#include<stdio.h>
#include <string.h>
#include<math.h>
/*
Turkish ID numbers have different kind of properties :

1-) ID numbers cannot start with 0.
2-) Total digits of ID cannot be greater than 11.
3-) It cannot contain any alphabetic or something different character.
4-) To find the tenth digit:
   n10=((n1+n3+n5+n7+n9)*7 - (n2+n4n+n6+n8)) mod10

5-)To find eleventh digit:
   n11=(n1+n2n+...+n10)mod10
*/

int main(){
char identity_number[12];
int count=0;
printf("enter id: ");
scanf("%s",identity_number);

int toplam1=(identity_number[0]+identity_number[2]+identity_number[4]+identity_number[6]+identity_number[8])-48*5;
int toplam2=(identity_number[1]+identity_number[3]+identity_number[5]+identity_number[7])-48*4;
int cikar=(toplam1*7)-toplam2;


if(strlen(identity_number)==11){
 if(identity_number[0] == '0'){
    printf("ID number cannot start with 0 !!");
 }
  else if(cikar%10 != identity_number[9]-48 && (toplam1+toplam2+identity_number[9]-48)%10 != identity_number[10]-48)
      //value of digits starting with 48 at ASCII table(0 corresponds to 48)
      //To get digit that we want, we should extract from 48 which is the length of digits between ASCII value and decimal value
     printf("invalid ID");
    else{ 
     for(int i=0;i<=strlen(identity_number);i++){
      if(identity_number[i]>=0  &&  identity_number[i]<=9 ){
         count=1;
     }  
   }
 }

if(count==1) printf("valid ID");
}
else{
    printf("invalid id number cant greater than 11");
}

}
