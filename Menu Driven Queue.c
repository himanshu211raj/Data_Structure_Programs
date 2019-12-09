#include <stdio.h>
#define MAX 1000
int arr[MAX];
int f = 0, r = -1;
void enqueue(){
printf("Enter the number to enter: ");
int num;
scanf("%d", &num);
printf("\n");
if(r<MAX){
arr[++r] = num;
}else{
printf("Queue is full \n\n");
}
}
void dequeue(){
if(f<=r){
f++;
}else{
printf("Queue is Empty \n");
}
}
void display(){
if(f<=r && (r > -1)){
printf("The elements are : \n");
for(int i = f; i<=r; i++){
printf("%d ", arr[i]);
}
printf("\n");
}
}

void queueDriver(int k){
switch (k) {
case 1:
enqueue();
break;
case 2:
dequeue();
break;
default:
break;

}
display();
}
int main() {
while (1) {
printf("Enter the operation to be performed on the queue \n1.Enqueue \n2.Dequeue \n3.Exit\
n");
int k; scanf("%d", &k);
if(k == 3){break;}
else if(k < 1 || k > 3) {printf("Invalid Operation \n \n");}
else{
queueDriver(k);
}
}
return 0;
}
