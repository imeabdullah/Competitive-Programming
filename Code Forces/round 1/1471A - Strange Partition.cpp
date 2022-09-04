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
    int x;
    cin >> n >> x;
    vector<ll> vec(n);
    fo(0,n) cin >> vec[i];
    ll sum = 0;
    ll maxi = 0;
    fo(0,n)
    {
        sum += vec[i];
        maxi += ceil((double)vec[i] / x) ;
    }
    setprecision(0);
    cout <<(ll) ceil((double)sum/x) << " " << (ll) maxi << endl;
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