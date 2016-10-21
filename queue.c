#include<stdio.h>
#include<stdlib.h>
void main()
{
clrscr();
int siz,arr[100];
printf("enter number of people in queue less than 100");
scanf("%d"&siz);
for(int i=0;i<siz;i++)
arr[i]=(i+1);
int j;
while(1)
{
j=-1;
for(i=1;i<siz;i+=2)
{
j++;
arr[j]=arr[i];
}
siz=siz/2;
if(siz==2||siz==3)
{
printf("person is %d",arr[1]);
break;
}
elseif(siz==0)
{
printf("person is %d",arr[0]);
break;
}
}
getch();
}
