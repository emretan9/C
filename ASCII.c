#include<stdio.h>
int main(){

char karakter;

printf("Enter a character to see ASCII value of that character...");
scanf("%c",&karakter);

printf("A char that you enter is %c and that chars ASCII value at ASCII table is %d",karakter,karakter);


if (65 <= karakter && karakter<=90) printf("\n Also ,char that u entered is upper letter");
else if (97 <= karakter && karakter<=127) printf("\n Also ,char that u entered is lower letter");

}
//ASCII tablosunda 65-90 arası büyük harfler, 97-127 arası küçük harfler tutuluyor.