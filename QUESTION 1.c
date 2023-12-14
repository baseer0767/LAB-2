#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 1,n,count = 1;
    int sum = 0;
    printf("Enter The Number Of Terms:");
    scanf("%d",&n);
    printf("The First %d Odd Natural Numbers Are:",n);
    while(count<=n){
        printf("%d ",i);
        sum+=i;
        i+=2;
        count++;}
        printf("\nThe sum of first %d odd natural no is:%d",n,sum);}


int main(){
    int i = 1,n,count;
    int sum = 0;
    printf("Enter The Number Of Terms:");
    scanf("%d",&n);
    printf("The First %d Odd Natural Numbers Are:\n",n);
    for(count=i; count<=n; count++){
        printf("%d ",i);
        sum+=i;
        i+=2;}
        printf("The sum of first %d odd natural no is:%d",n,sum);}

int main(){
    int i = 1,n,count=1;
    int sum = 0;
    printf("Enter The Number Of Terms:");
    scanf("%d",&n);
    printf("The First %d Odd Natural Numbers Are:",n);
    do{
        printf("%d ",i);
        sum+=i;
        i+=2;
        count++;}while(count<=n);
        printf("\nThe sum of first %d odd natural no is:%d",n,sum);}
