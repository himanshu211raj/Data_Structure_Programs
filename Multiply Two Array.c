#include <stdio.h>
 
int main()
{
  int m, n, p, q, i, j, k, sum = 0;
  int a[10][10], b[10][10], c[10][10];
  printf("KAUSTUBH\n43114803118\n");
  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");
 
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
 
  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("The matrices can't be multiplied with each other.\n");
  else
  {
    printf("Enter elements of second matrix\n");
 
    for (i = 0; i < p; i++)
      for (j = 0; j < q; j++)
        scanf("%d", &b[i][j]);
 
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++) {
        for (k = 0; k < p; k++) {
          sum = sum + a[i][k]*b[k][j];
        }
 
        c[i][j] = sum;
        sum = 0;
      }
    }
 
    printf("Product of the matrices:\n");
 
    for (i = 0; i < m; i++) {
      for (j = 0; j < q; j++)
        printf("%d\t", c[i][j]);
 
      printf("\n");
    }
  }
 
  return 0;
}
