#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j,k;
    printf("Enter the Size Of Pyramid:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }for(k=1;k<=i;k++){
            printf("* ");
        }printf("\n");
    }
    }
