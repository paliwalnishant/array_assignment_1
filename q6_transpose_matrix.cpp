#include <stdio.h>
 
int main()
{
   int r, c, i, j, matrix[10][10], transpose[10][10];
 
   printf("Enter the number of rows and columns of matrix ");
   scanf("%d%d",&r,&c);
   printf("Enter the elements of matrix \n");
 
   for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j < c ; j++ )
      {
         scanf("%d",&matrix[i][j]);
      }
   }
 
   for( i = 0 ; i < r ; i++ )
   {
      for( j = 0 ; j < c ; j++ )
      {
         transpose[j][i] = matrix[i][j];
      }
   }
 
   printf("Transpose of entered matrix :-\n");
 
   for( i = 0 ; i < c ; i++ )
   {
      for( j = 0 ; j < r ; j++ )
      {
         printf("%d\t",transpose[i][j]);
      }  
      printf("\n");
   }
 
   return 0;
}
