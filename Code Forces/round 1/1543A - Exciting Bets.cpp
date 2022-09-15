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
    ll a, b;
    cin >> a >> b;
    if(a < b) swap(a, b);
    if(a==b)
    {
        cout<<0<<" "<<0<<endl;
        return;
    }
    ll x = abs(a - b);
    ll y = a % x; // 2
    y = min(y, x - y);
    cout << x << " " << y << endl;
}

int main() 
{
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    test(t){
        solve();
    }
}