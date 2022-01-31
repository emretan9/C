#include <stdlib.h>
#include <stdio.h>
int main(){
    
int a,b,c,x;
float sonuc;
printf("fonksiyonun x degerini gir:");
scanf("%d",&x);
printf("fonksiyonun baskatsayisini gir:");
scanf("%d",&a);
printf("fonskiyonda x in katsayisini gir:");
scanf("%d",&b);
printf("fonksiyonun sabit sayisini  gir:");
scanf("%d",&c);

sonuc=a*x+b*x+c;

printf("girdiginiz fonksiyon f(x)= %d x^2 + %d x +%d ",a,b,c);
printf("\n Fonksiyonunuzun sonucu= %f", sonuc);  // Burda kesirli bi sayının virgülden sonrasını görmemek için (int)sonuc dersen
//sadece virgülden önceki yeri gösterir buna casting denir.

}