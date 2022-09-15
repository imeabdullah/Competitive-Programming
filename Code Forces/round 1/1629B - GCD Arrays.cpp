#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          first
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(j,n)     for(int i = j;i<n;i++)
#define rfo(n,j)    for(int i = n-1;i>=j;i--)
#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl
#define mod         1e9+7
#define local

int n;

void solve() 
{
    ll l,r,k;
    cin>>l>>r>>k;
    ll ans=0;
    ll x=(r-l+1);
    ans=x/2;
    if(l%2==1 && r%2==1)ans++;
    if(l==r)
    {
        if(l==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    else if(k>=ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;     
}

int main() 
{
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    test(t)
    {
        solve();
    }
}