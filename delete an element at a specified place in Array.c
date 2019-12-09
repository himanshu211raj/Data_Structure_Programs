#include <stdio.h>
int main()
{
   int n,arr[n+2],pos,i,len=0;
   printf("KAUSTUBH\n43114803118\n");
   printf("Enter size of Array: ");
   scanf("%d", &n);
   printf("Enter elements of Array: ");
   for (i = 0; i < n; i++)
   {
   	scanf("%d", &arr[i]);
   	len++;
   }
   printf("Enter location of element to be deleted: ");
   scanf("%d", &pos);
   	for (i = pos - 1; i < len-1; i++)
         arr[i] = arr[i+1];

    printf("Final Array is:\n"); 
      for (i = 0;i<len-1; i++)
         printf("%d\n", arr[i]);
   return 0;
}
