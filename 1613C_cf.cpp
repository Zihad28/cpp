/*Bismillahir Rahmanir Rahim*/
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define PI acos(-1.0)
#define mx 1000000000
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,h,cnt=0,f=0;
        cin>>n>>h;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)
            cin>>v[i];
        ll a=0,r=0,mid,l=h+1;
        while(r<=l)
        {
            ll sum=0;
            mid=(l+r)/2;
            for(ll i=1;i<n;i++)
            {
               sum+=min(mid,(v[i]-v[i-1]));
            }
            sum+=mid;
            if(sum>=h) {a=mid,l=mid-1;}
            else
                r=mid+1;
            //cout<<r<<" "<<l<<endl;
        }
        cout<<a<<endl;
    }
}
