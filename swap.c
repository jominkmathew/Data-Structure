#include<stdio.h>  
 int main()    
{    
int a, b,c;      
printf("Enter the numbers:");    
scanf("%d%d",&a,&b);  
printf("Before swap a=%d b=%d",a,b);      
c=a;
a=b;    
printf("\nAfter swap a=%d b=%d",a,c);    
}