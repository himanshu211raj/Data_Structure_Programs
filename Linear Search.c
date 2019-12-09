#include <stdio.h>
int main() {
int n, searchFlag = 0;
printf("Enter the number of elements to be entered\n");
scanf("%d", &n);
int arr[n];
printf("Enter the elements \n");
for(int i = 0; i<n; i++){
scanf("%d", &arr[i]);
}
int k;
printf("Enter the number to be searched \n");
scanf("%d", &k);
for(int i = 0; i<n; i++){
if(arr[i] == k){
searchFlag = 1;
}
}
if(searchFlag){
printf("Number is present \n");
}else{
printf("Number is not present \n");
}
return 0;
}
