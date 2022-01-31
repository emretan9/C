#include<stdio.h>
int main(){

int pass1[10];
int passCheck[10];
int i;
int wrong;

while(1){
    i=0;
    wrong=0;
    
    printf("enter your password:");
    scanf("%d",pass1);
    printf("enter your password again:");
    scanf("%d",passCheck);

    while(!(pass1[i] =='\0' && passCheck[i] =='\0')){
      if(pass1[i] == passCheck[i]){
          printf("password approved welcome to your account!\n");
          i++;
      }
       else{
           printf("passwrods couldnt match try again!");
           wrong=1;
           break;
       }       
       
       }
       if(wrong==0){
           printf("welcome");
           break;
    }


}








   
}