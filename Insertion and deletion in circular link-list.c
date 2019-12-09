#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
typedef struct Node
{
int info;
struct Node *next;
}node;
node *front=NULL,*rear=NULL,*temp;
void create();
void del();
void display();
int main()
{
int chc;
do
{
printf(&quot;\nMenu\n\t 1 to create the element : &quot;);
printf(&quot;\n\t 2 to delete the element : &quot;);
printf(&quot;\n\t 3 to display the queue : &quot;);
printf(&quot;\n\t 4 to exit from main : &quot;);
printf(&quot;\nEnter your choice : &quot;);
scanf(&quot;%d&quot;,&amp;chc);
switch(chc)
{
case 1:
create();
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
return 1;
default:

printf(&quot;\nInvalid choice :&quot;);
}
}while(1);
return 0;
}
void create()
{
node *newnode;
newnode=(node*)malloc(sizeof(node));
printf(&quot;\nEnter the node value : &quot;);
scanf(&quot;%d&quot;,&amp;newnode-&gt;info);

newnode-&gt;next=NULL;
if(rear==NULL)
front=rear=newnode;
else
{
rear-&gt;next=newnode;
rear=newnode;
}
rear-&gt;next=front;
}
void del()
{
temp=front;
if(front==NULL)
printf(&quot;\nUnderflow :&quot;);
else
{
if(front==rear)
{
printf(&quot;\n%d&quot;,front-&gt;info);
front=rear=NULL;
}
else
{
printf(&quot;\n%d&quot;,front-&gt;info);
front=front-&gt;next;
rear-&gt;next=front;
}
temp-&gt;next=NULL;
free(temp);
}
}
void display()
{
temp=front;
if(front==NULL)
printf(&quot;\nEmpty&quot;);
else
{
printf(&quot;\n&quot;);
for(;temp!=rear;temp=temp-&gt;next)
printf(&quot;\n%d address=%u next=%u\t&quot;,temp-&gt;info,temp,temp-&gt;next);
printf(&quot;\n%d address=%u next=%u\t&quot;,temp-&gt;info,temp,temp-&gt;next);

}
}
