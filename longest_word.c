#include<stdio.h>
#include<string.h>

int main()
{
        long long int k,len,total=0,max=0;
        char str[10000];
        char compare[100],hit[100];
        
        while(gets(str))
        {
                compare[0]='\0';
                hit[0]='\0';
                total=0;
                max=0;
                len=strlen(str);
                //len=len;
                k=0;
                while(k<len)
                {
                        
                        total=0;
                        while(str[k]!=' ')
                        {
                                
                                
                                        compare[k]=str[k];
                                        total++;
                                        k++;
                                
                        }
                        if(total>max)
                        {
                                max=total;
                                strcpy(hit,compare);
                        }
                       k++;
                }
                
                 puts(hit);
        }
        return 0;
}