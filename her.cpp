#include<bits/stdc++.h>

using namespace std;


int main()
{

long long n,m;
        cin>>n;
    long long a[n];
        long long sum=0;
        for(int i=0;i<n;i++) { cin>>a[i]; sum=sum+a[i]; }
            long long sum1=0;
    int i;
    //cout<<sum;
    for(i=0;i<n;i++){
        sum1=sum1+a[i];
        if(sum-sum1<=sum1) break;

    }
        cout<<i+1;


	return 0;
}
