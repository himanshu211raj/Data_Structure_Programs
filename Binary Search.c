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
int s = 0, e = n-1;
while (s<=e) {
int m = (s+e)/2;
if(arr[m] == k){
searchFlag = 1;
break;
}else if(k > arr[m]){
s = m+1;
}else{
e = m-1;
}
}
if(searchFlag){
printf("Number is present \n");
}else{
printf("Number is not present \n");
}
return 0;
}
