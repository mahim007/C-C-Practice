#include<stdio.h>

int main()
{
        int j,k,l,n,temp;
        int grade[5000];
        
        while(scanf("%d",&n)==1)
        {
              
                for(j=0;j<n;j++)
                {
                        scanf("%d",&grade[j]);
                }
                
                for(k=1;k<=n-1;k++)
                {
                        for(l=0;l<n-k;l++)
                        {
                                if(grade[l]<grade[l+1])
                                {
                                        temp=grade[l];
                                        grade[l]=grade[l+1];
                                        grade[l+1]=temp;
                                }
                        }
                }
                for(j=0;j<n;j++)
                        printf("%d",grade[j]);
                puts("");
                
                
                for(k=1;k<=n-1;k++)
                {
                        for(l=0;l<n-k;l++)
                        {
                                if(grade[l]>grade[l+1])
                                {
                                        temp=grade[l];
                                        grade[l]=grade[l+1];
                                        grade[l+1]=temp;
                                }
                        }
                }
                
                if(grade[0]==0)
                {
                        for(j=1;j<n;j++)
                        {
                                if(grade[j]!=0)
                                {
                                        temp=grade[j];
                                        grade[j]=grade[0];
                                        grade[0]=temp;
                                        break;
                                }
                        }
                }
                for(j=0;j<n;j++)
                        printf("%d",grade[j]);
                
                puts("");
        }
        
        return 0;
}