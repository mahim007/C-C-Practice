#include<stdio.h>
int main()
{
        long long int x,y,result;
       int i=0;
       char ch;
       
       while(1) {
                     scanf("%c %lld %lld",&ch,&x,&y);
                     if(x==0 && y==0)
                            break;
              switch(ch) 
                     {
                     case 'A':
                            result=x+y;
                            printf("Case %d:%lld\n",++i,result);
                            break;
                            
                     case 'S':
                            if(x>y)
                                   result=x-y;
                            else
                                   result=y-x;
                            
                            printf("Case %d:%lld\n",++i,result);
                            break;
                     
                     case 'M':
                            result=x*y;
                            printf("Case %d:%lld\n",++i,result);
                            break;
                     
                     case 'D':
                            
                                   result=x/y;
                                   printf("Case %d:%lld\n",++i,result);
                                   break;
                            
                     
                     case 'R':
                            
                                   result=y%x;
                                   printf("Case %d:%lld\n",++i,result);
                                   break;
                            
                   
                     }
       }
       
       return 0;
}