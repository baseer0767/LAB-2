#include <stdio.h>
#include <stdlib.h>

int main(){
    char s1[]="default";
    char s2[]="default";
    printf("Enter the first string:");
    scanf("%s",&s1);
    printf("Enter the second string:");
    scanf("%s",&s2);
    if (strlen(s1)==strlen(s2)){
        printf("Both Strings are Equal");
    }else if(strlen(s1)>strlen(s2)){
        printf("String_1 is greater than String_2");
    }else{
        printf("String_2 is greater than String_1");
    }
    }
