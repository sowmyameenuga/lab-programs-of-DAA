#include <stdio.h>
int main() {
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int i, largest;
   largest = arr[0];
   for(i = 1; i < 10; i++) {
      if (largest < arr[i]) 
         largest = arr[i];
   }
   printf("Largest element of array is %d", largest);   
   return 0;
}
