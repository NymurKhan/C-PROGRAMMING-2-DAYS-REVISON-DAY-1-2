#include<stdio.h>

int main(){
    int day;
    printf("enter the day: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1 : printf("SATURDAY \n");
    break;

    case 2 : printf("SUNDAY \n");
    break;

    case 3 : printf("monday \n");
    break;

    case 4 : printf("tuesday \n");
    break;

    case 5 : printf("wednesday \n");
    break;

    case 6 : printf("thursday \n");
    break;

    case 7 : printf("friday \n");
    break; 

    
    default: printf("not a valid day");
        break;
    }
    return 0;

}