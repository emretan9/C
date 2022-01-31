#include <stdio.h>
int main(){
int i, num, count= 1;
printf("Please enter a number:");
scanf("%d", &num);

for(i=2; i<num; i++){
   if(num%i==0){
       count=0;
       break;
   }
}
if(count==0){
    printf("entered num %d is not prime number",num);
}
else{
    printf("entered number %d is prime",num);
}






}