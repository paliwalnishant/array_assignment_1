#include <stdio.h>
 
void merge(int [], int, int [], int, int []);
 
int main() {
  int a[100], b[100], m, n, i, sorted[200];
 
  printf("Input number of elements in first array\n");
  scanf("%d", &m);
 
  printf("Input %d integers\n", m);
  for (i = 0; i < m; i++) {
    scanf("%d", &a[i]);
  }
 
  printf("Input number of elements in second array\n");
  scanf("%d", &n);
 
  printf("Input %d integers\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }
 
  merge(a, m, b, n, sorted);
 
  printf("Sorted array:\n");
 
  for (i = 0; i < m + n; i++) {
    printf("%d\n", sorted[i]);
  }
 
  return 0;
}
 
void merge(int a[], int m, int b[], int n, int sorted[]) {
  int l, j, k;
 
  j = k = 0;
 
  for (l = 0; l < m + n;) {
    if (j < m && k < n) {
      if (a[j] < b[k]) {
        sorted[l] = a[j];
        j++;
      }
      else {
        sorted[l] = b[k];
        k++;
      }
      l++;
    }
    else if (j == m) {
      while ( l < m + n) {
        sorted[l] = b[k];
        k++;
        l++;
      }
    }
    else {
      while ( l < m + n) {
        sorted[l] = a[j];
        j++;
        l++;
      }
    }
  }
}
