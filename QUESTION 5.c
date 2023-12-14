#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j,count;
    printf("Enter The Length Of An Array:");
    scanf("%d",&n);
    int var[n];
    for(int i=0;i<n;i++){
        printf("Enter the value of element %d = ",i+1);
        scanf("%d",&var[i]);
    }printf("The Unique Elements in an array are = ");
    for(i=0;i<n;i++){
        count = 0;
        for(j=0;j<n;j++){
            if(var[i]==var[j]){
                count++;}
        }if(count == 1){
            printf(" %d ",var[i]);}}
