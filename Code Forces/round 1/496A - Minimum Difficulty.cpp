#include<bits/stdc++.h>
using namespace std;
#define fast        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define all(v)      v.begin(),v.end()
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
    cin >> n;
    vector<ll> vec(n);
    fo(0,n) cin >> vec[i];

    ll minDif = INT_MAX;
    for(int i = 1;i<(n-1);i++) {
        int j = i -1;
        int k = i+1;
        minDif = min(minDif,(vec[k] - vec[j]));
    }

    ll maxDif = INT_MIN;
    for(int i = 1;i<n;i++) {
        maxDif = max(maxDif, (vec[i] - vec[i-1]));
    }
    cout << max(minDif, maxDif) << endl;
}

int main() 
{
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    solve();
}