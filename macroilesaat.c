#include<stdio.h>
#include <math.h>
#include<stdlib.h>

#define enBuyukSayi(sayi1,sayi2) (sayi1>sayi2) ? sayi1 : sayi2 //kondisyon varsa ? koy

#define showTime(karakter) (karakter == 'E') || (karakter == 'e') ? __TIME__ : "KULLANICI SAATI OGRENMEK ISTEMIYOR"

#define numChar(karakter2) (karakter2 == 'k')   ? karakter2:'5' //bu macroda iki tarafında aynısı ollması lazım yani sayı olduğu yerlerde de string basmasın diye tek tırnak kullandık!!

int main(){
    char kullaniciKarakter;
    char karakter3='k';

printf("saati ogrenmek istermisiniz?\n");
scanf("%c",&kullaniciKarakter);
  if (showTime(kullaniciKarakter)) printf("%s",showTime(kullaniciKarakter));
  else printf("%s",showTime(kullaniciKarakter));
printf("\n");

printf("%d",enBuyukSayi(5,9));
printf("\n");
if (numChar(karakter3)) printf("c",numChar(karakter3));
else printf("%c",numChar(karakter3));

}