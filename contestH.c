#include<stdio.h>
#include<string.h>
int fact(int x);

int main()
{
       char str[9999];
       int p,q,n,len,factlen,pandq,def,total,last,lastfact,i;
       scanf("%d",&n);
       
       for(i=0;i<=n;i++) {
             
              scanf("%d %d",&p,&q);
               gets(str);
              
              len=strlen(str);
              factlen=fact(len);
              def=q-p;
              pandq=fact(def);
              last=len-def;
              lastfact=fact(last);
              total=factlen/(pandq*lastfact)-1;
              printf("case %d: %d\n",i+1,total);
              
       }
}
int fact(int x)
{
       int sum=1,i;
       for(i=1;i<x+1;i++)
              sum=sum*i;
       
       return (sum);
}