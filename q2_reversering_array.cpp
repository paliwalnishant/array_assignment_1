#include <stdio.h>
 
int main()
{
   int n, i, j, arr[100], rarr[100];
 
   printf("Enter the number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter the array elements\n");
 
   for (i = 0; i < n ; i++)
      scanf("%d", &arr[i]);
 
  
 
   for (i = n - 1, j = 0; i >= 0; i--, j++)
      rarr[j] = arr[i];
 
 
 
   for (i = 0; i < n; i++)
      arr[i] = rarr[i];
 
   printf("Reverse array is\n");
 
   for (i = 0; i < n; i++)
      printf("%d\n", arr[i]);
 
   return 0;
   
}
