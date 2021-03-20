#include<stdio.h>
int main()
{
int n, Mult = 1, i, array[10];
printf("Enter the limit :");
scanf("%d", &n);
printf("Enter %d integers :",n );
for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        Mult *= array[i];
    }
    printf("Mult = %d", Mult);
}