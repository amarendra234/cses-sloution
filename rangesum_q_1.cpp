#include <iostream>
using namespace std;
int main() {
    typedef long long ll;
    ll n,m;
    cin>>n>>m;
    ll a[n];
    ll s=0;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll prefix[n+1];
    prefix[0]=0;
    for(ll i=0;i<n;i++)
    {
        s+=a[i];
        prefix[i+1]=s;
    }
    for(ll i=1;i<=m;i++)
    {
        ll x,y;
        cin>>x>>y;
        cout<<prefix[y]-prefix[x-1]<<endl;
    }
}
