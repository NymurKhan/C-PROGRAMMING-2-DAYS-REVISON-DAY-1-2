#include<stdio.h>

int main()
{
	 char ch;
	 
	 printf("Enter chracter: ");
	 scanf("%c", &ch);
	
	 if(ch>='0' && ch<='9')
	 {
	  	printf("%c is DIGIT.", ch);
	 }
	 else
	 {
	  	printf("%c is NOT DIGIT.", ch);
	 }
	
	
	 return(0);
}