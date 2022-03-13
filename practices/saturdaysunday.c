#include<stdio.h>
#include<math.h>

int main(){
    int isSunday = 0;
    int isSnowing = 1;
    printf("%d \n", isSunday || isSnowing);

    int monday = 1;
    int raining = 1;
    printf("%d\n", monday || raining);
    return 0;
}