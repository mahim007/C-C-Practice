#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s,t;
   cin>>s>>t;
   int len = s.length();
   int a[26] = {0};
   int b[26] = {0};
   for(int i=0;i<len;i++)
   {
       b[s[i]-'a']++;

       a[t[i]-'a']++;
   }

   char A[len];
   int L = 0 , R = len-1;
   int cnt = 0;
   int p1 = len/2 , p2 = len/2;
   if(len%2==1)
    p2++;
   while(L <= R)
   {

       if(L <= R)
       {
           int maxx1 = -1,minx1 = 1e9 , minx2 = 1e9;
           for(int i=0;i<26;i++)
           {
               if(a[i] > 0)
               {
                   maxx1 = max(maxx1,i);
               }
           }
           for(int i=0;i<26;i++)
           {
               if(b[i] > 0)
                minx1 = min(minx1 , i);
           }
           int Y = 0;
           for(int i=0;i<26;i++)
           {
               if(b[i] > 0)
               {
                   Y+=b[i];
                   if(Y >= p2)
                   {
                       minx2 = i;
                       break;
                   }
               }
           }
           if(minx1 < maxx1)
           {
               A[L] = char('a'+minx1);
               b[minx1]--;
               L++;
           }
           else
           {
               A[R] = char('a'+minx2);
               b[minx2]--;
               R--;
           }
           p2--;
       }
       if(L <= R)
       {
           int maxx = -1 , minx = 1e9 , maxx2 = 1e9;
           for(int i=0;i<26;i++)
           {
               if(b[i] > 0)
               {
                   minx = min(minx , i);
               }
           }
           for(int i=0;i<26;i++)
           {
               if(a[i] > 0)
                maxx = max(maxx , i);

           }
           int Y = 0;
           for(int i=25;i>=0;i--)
           {
               if(a[i] > 0)
               {
                   Y+=a[i];
                   if(Y >= p1)
                   {
                       maxx2 = i;
                       break;
                   }
               }
           }
           p1--;
           if(maxx > minx)
           {
               A[L] = char('a'+maxx);
               a[maxx]--;
               L++;
           }
           else
           {
              A[R] = char('a'+maxx2);
              a[maxx2]--;
              R--;
           }
       }

   }

   for(int i=0;i<len;i++)
    cout<<A[i];
}
