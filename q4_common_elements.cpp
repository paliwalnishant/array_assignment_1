#include<stdio.h>
 

int commonelements(int arr1[], int arr2[], int r, int c)
{
  int i = 0, j = 0;
  while(i < r && j < c)
  {
    if(arr1[i] < arr2[j])
      i++;
    else if(arr2[j] < arr1[i])
      j++;
    else 
    {
      printf(" %d ", arr2[j++]);
      i++;
    }
  }
}
 
int main()
{
  int arr1[] = {1,3,7,8,9,10,11,15};
  int arr2[] = {2,3,5,8,10,11};
  int r = sizeof(arr1)/sizeof(arr1[0]);
  int c = sizeof(arr2)/sizeof(arr2[0]);
  commonelements(arr1, arr2, r, c);
  getchar();
  return 0;
}
