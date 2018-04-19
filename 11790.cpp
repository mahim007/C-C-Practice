#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 10009
struct data{
    ll height,width;
};
vector<data>V;
ll dp1[mx],dp2[mx];
int main(){
    ll T,t,i,j,k,n;
    scanf("%lld",&T);
    for(t=1;t<=T;t++){
        scanf("%lld",&n);
        for(i=0;i<n;i++){
            data D;
            ll p;
            scanf("%lld",&p);
            D.height=p;
            V.push_back(D);
        }

        for(i=0;i<n;i++){
            ll p;
            scanf("%lld",&p);
            V[i].width=p;
        } //for(i=0;i<n;i++) //cout<<V[i].height<<" "<<V[i].width<<endl;

        ll incrs=-1,decrs=-1;
        dp1[0]=V[0].width;
        for(i=0;i<n;i++){
            ll p=dp1[i]=V[i].width;
            for(j=0;j<i;j++){
                if(V[i].height>V[j].height && dp1[i]<p+dp1[j]){
                    dp1[i]=p+dp1[j];
                }
            }

            if(dp1[i]>incrs) incrs=dp1[i];
        }

        dp2[0]=V[0].width;
        for(i=0;i<n;i++){
            ll p=dp2[i]=V[i].width;
            for(j=0;j<i;j++){
                if(V[i].height<V[j].height && dp2[i]<p+dp2[j]){
                    dp2[i]=p+dp2[j];
                }
            }

            if(dp2[i]>decrs) decrs=dp2[i];
        }

        if(incrs>=decrs){
            printf("Case %lld. Increasing (%lld). Decreasing (%lld).\n",t,incrs,decrs);
        }
        else{
            printf("Case %lld. Decreasing (%lld). Increasing (%lld).\n",t,decrs,incrs);
        }
        V.clear();
    }
    return 0;
}
