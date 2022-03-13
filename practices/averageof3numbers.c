#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    float avg;
    printf("enter the numbers - ");

    scanf("%f%f%f", &a, &b, &c);
    avg = (a + b + c)/3;
    printf("the average of this three number is : %0.2f\n", avg);

}