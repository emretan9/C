#include<stdio.h>
#include<stdlib.h>
int main(){

/* MALLOC*/
//memory allocation.

int *alan1 = malloc(10*sizeof(int));

/*CALLOC*/
//clear allocation

int *alan2 =calloc(10,sizeof(int));

for(int i=0;i<10;i++){
    printf("alan1[%d]= %d\n alan2[%d]=%d",i,alan1[i],i,alan2[i]);
}
alan1 = realloc(alan1,5*sizeof(int));

for(int i=0;i<5;i++){
    printf("\nalan1[%d]= %d ",i,alan1[i]);
}




}