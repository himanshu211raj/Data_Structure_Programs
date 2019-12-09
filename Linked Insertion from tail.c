#include <stdio.h>
struct Node {
int data;
struct Node* next;
};
struct Node* head = NULL;
struct Node* generateNode(int data){
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode -> data = data;
newNode -> next = NULL;
return newNode;
}

void insertFromTail(int data){
struct Node* newNode = generateNode(data);
if(!head){
newNode -> next = head;
head = newNode;
}else{
struct Node* t = head;
while (t->next) {
t = t->next;
}
t->next = newNode;
}
}

void display(struct Node* node){
if(!node){
printf("\n");
return;
}
printf("%d ", node->data);
display(node->next);
}

int main() {
while (1) {
printf("Enter the number to insert in Linked list or press -1 to exit: \n");
int k; scanf("%d", &k);
if(k == -1){break;}

else{
insertFromTail(k);
printf("The current List is: \n");
display(head);
printf("\n");
}
}

return 0;
}
