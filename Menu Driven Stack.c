#include <stdio.h>
#define MAX 1000
int arr[MAX] = {0};
int t = -1;
void push(){
printf("Enter the number to be pushed \n");
int num;
scanf("%d", &num);
arr[++t] = num;
printf("\n");
}
void pop(){
if(t<0){
printf("Stack is already empty \n");
return;
}
t--;
printf("\n");
}
void peak(){
if(t<0){
printf("Stack is already empty \n");
return;
}
int max = -1;
for(int i= 0; i<=t; i++){
max = max > arr[i] ? max : arr[i];
}
printf("Max is %d \n", max);
}
void stackDriver(int k){
switch (k) {
case 1:
push();
break;
case 2:
pop();
break;
case 3:

peak();
break;
default:
break;
}
if(t >= 0){
printf("The Stack is \n");
for(int i = 0; i<=t; i++){
printf("%d ", arr[i]);
}
}
printf("\n \n");
}
int main() {
while (1) {
printf("Enter the operation to be performed on the stack \n1.Push \n2.Pop \n3.Peak \n4.Exit\
n");
int k; scanf("%d", &k);
if(k == 4){break;}
else if(k < 1 || k > 4) {printf("Invalid Operation \n \n");}
else{
stackDriver(k);
}
}
return 0;
}
