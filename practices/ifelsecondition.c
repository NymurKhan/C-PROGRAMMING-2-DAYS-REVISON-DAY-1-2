#include<stdio.h>

int main(){
    int age;
    printf("enter age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("he is adult");


    }
    else if(age > 13 && age < 18)
    {
        printf("teenager");

    }
    else{
        printf("child");
    }


    return 0;
}