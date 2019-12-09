#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
struct dnode
{
struct dnode *prev;
int data;
struct dnode *next;
};
struct dnode *start = NULL;
void append(int);
void addatbeg(int);
void remov(int);
void display();
int main()
{
int n, ch;
do
{
printf(&quot;\n\nOperations on doubly linked list&quot;);
printf(&quot;\n1. Append \n2. Add at beginning \n3. Remove\n4. Display\n0. Exit\n&quot;);
printf(&quot;\nEnter Choice 0-4? : &quot;);
scanf(&quot;%d&quot;, &amp;ch);
switch (ch)
{
case 1:
printf(&quot;\nEnter number: &quot;);
scanf(&quot;%d&quot;, &amp;n);
append(n);
break;
case 2:
printf(&quot;\nEnter number: &quot;);
scanf(&quot;%d&quot;, &amp;n);
addatbeg(n);
break;
case 3:
printf(&quot;\nEnter number to delete: &quot;);
scanf(&quot;%d&quot;, &amp;n);
remov(n);
break;
case 4:
display();
break;
}
}while (ch != 0);
}
void append(int num)
{
struct dnode *nptr, *temp = start;
nptr = malloc(sizeof(struct dnode));
nptr-&gt;data = num;
nptr-&gt;next = NULL;
nptr-&gt;prev = NULL;

if (start == NULL)
{
start = nptr;
}
else
{
while (temp-&gt;next != NULL)
temp = temp-&gt;next;
nptr-&gt;prev = temp;
temp-&gt;next = nptr;
}
}
void addatbeg(int num)
{
struct dnode *nptr;
nptr = malloc(sizeof(struct dnode));
nptr-&gt;prev = NULL;
nptr-&gt;data = num;
nptr-&gt;next = start;
if (start != NULL)
start-&gt;prev = nptr;
start = nptr;
}
void remov(int num)
{
struct dnode *temp = start;
while (temp != NULL)
{
if (temp-&gt;data == num)
{
if (temp == start)
{
start = start-&gt;next;
start-&gt;prev = NULL;
}
else
{
if (temp-&gt;next == NULL)
temp-&gt;prev-&gt;next = NULL;
else
{
temp-&gt;prev-&gt;next = temp-&gt;next;
temp-&gt;next-&gt;prev = temp-&gt;prev;
}
free(temp);
}
return ;
}
temp = temp-&gt;next;
}
printf(&quot;\n%d not found.&quot;, num);
}
void display()
{

struct dnode *temp = start;
printf(&quot;\n&quot;);
while (temp != NULL)
{
printf(&quot;%d\t&quot;, temp-&gt;data);
temp = temp-&gt;next;
}
}
