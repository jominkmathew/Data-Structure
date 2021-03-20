#include<stdio.h>    
void main ()    
{   int i, j,temp;     
    int a[5] = { 1,2,3,4,5};     
    for(i = 0; i<5; i++)    
    {    
    for(j = i+1; j<5; j++)    
     {    
            if(a[j] > a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    printf("Printing Sorted Element List ...\n");    
    for(i = 0; i<5; i++)    
    {    
        printf("%d\n",a[i]);    
    }    
}     