#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(15);
    pq.push(20);
    pq.push(10);
    printf("%d\n",pq.size());
    while(!pq.empty())
    {
        printf("%d ",pq.top());
        pq.pop();
    }

}
