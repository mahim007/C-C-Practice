#include<bits/stdc++.h>
using namespace std;

int main()
{
    int data[20];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>data[i];

    sort(data,data+n);
    for(int i=0;i<n;i++)
        cout<<data[i]<<" ";
}
