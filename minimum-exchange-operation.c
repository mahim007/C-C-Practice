#include<stdio.h>
int main()
{
int ara[1100],n,k,i,j,temp,count;
while(scanf("%d",&n)==1)
{
for(k=0;k<n;k++)
{
scanf("%d",&ara[k]);
}
count=0;
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(ara[i]>ara[j])
{
temp=ara[i];
ara[i]=ara[j];
ara[j]=temp;
count++;
}
}
}
printf("Minimum exchange operations : %d\n",count);
}
return 0;
}