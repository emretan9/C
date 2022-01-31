#include <stdio.h>
 
int main()
{
    int num;
    int sum= 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i = 1; i < num; i++)
    {
        if(num % i == 0){
            sum+= i;
        }
    }
    if(num == sum){
        printf("%d is perfect number",num);
    }
    else{
        printf("%d is not perfect number",num);
    }
}