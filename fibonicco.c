#include<stdio.h>
int main()
{
 int i,n,f1,f3,f2;
 f1=1;
 f2=0;
 printf("\nEnter a number for n:");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
  {
     f3=f1+f2;
     f1=f2;
     f2=f3;
     printf("%d ",f3);

  }

return 0;

}
