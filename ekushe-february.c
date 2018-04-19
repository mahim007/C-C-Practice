#include<stdio.h>
#include<math.h>


int main()
{
       long long int n;
       int div,t,i,j,cross;
       
       scanf("%d",&t);
       for(i=1;i<=t;i++)
       {      div=0;
              cross=0;
              scanf("%lld",&n);
              
              for(j=1;j<=sqrt(n);j++)
              {
                     if((n%j)==0)
                            div++;
                     
                     if(j==sqrt(n))
                            cross=1;
              }
              div=div*2-cross;
       
              if(div%2)
                     printf("Yes\n");
              else
                     printf("No\n");
       }
       
       return 0;
}