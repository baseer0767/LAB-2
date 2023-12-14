#include <stdio.h>
#include <stdlib.h>

struct Distance{
    int feet;
    int inch;
};
int main(){
    struct Distance distance1,distance2;
    printf("Enter the first distance:\n");
    printf("Feet:");
    scanf("%d",&distance1.feet);
    printf("Inches:");
    scanf("%d",&distance1.inch);
    printf("Enter the Second distance:\n");
    printf("Feet:");
    scanf("%d",&distance2.feet);
    printf("Inches:");
    scanf("%d",&distance2.inch);
    int result1 = distance1.feet + distance1.inch;
    int result2 = distance2.feet + distance2.inch;
    printf("Result_1 = %d\n",result1);
    printf("Result_2 = %d",result2);

    }
