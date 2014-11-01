#include <stdio.h>
#include <stdlib.h> 

 
int min(int arr[], int n, int x, int y)
{
   int i, j;
   int dist ;
   for (i = 0; i < n; i++)
   {
     for (j = i+1; j < n; j++)
     {
         if( (x == arr[i] && y == arr[j] ||
              y == arr[i] && x == arr[j]) && n > abs(i-j))
         {
              dist = abs(i-j);
         }
     }
   }
   return dist;
}
 
int main() 
{
    int arr[] = {3, 5, 7, 4, 2, 5, 6, 5, 6, 6, 5, 4, 4, 4, 8, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    int y = 6;
 
    printf("Minimum distance between %d and %d is %d\n", x, y, 
              min(arr, n, x, y));
    return 0;
}
