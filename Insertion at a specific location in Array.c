#include <stdio.h>
int main()
{
   int n,arr[n+2],pos,val,i,len=0;
   printf("KAUSTUBH\n43114803118\n");
   printf("Enter Size of Array: ");
   scanf("%d", &n);
   printf("Enter elements of Array: ");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
      len++;
   }
   printf("Enter the location of insertion: ");
   scanf("%d", &pos);
   printf("Enter the value to be inserted: ");
   scanf("%d", &val);
   for (i = len - 1; i >= pos - 1; i--)
      arr[i+1] = arr[i];

   arr[pos-1] = val;
   printf("Final array is\n");
   for (i = 0; i <= len; i++)
      printf("%d\n", arr[i]);
   return 0;
}
