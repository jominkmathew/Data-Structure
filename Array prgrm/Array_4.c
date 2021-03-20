#include <stdio.h>
int main() 
   {
   int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   int i, largest;
   largest = array[0];
   for(i = 0; i < 10; i++) 
   {
      if( largest < array[i] ) 
         largest = array[i];
   }
   printf("Largest number from array %d", largest);   
}