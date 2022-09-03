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
    int a1, b1;
    cin >> a1 >> b1;
    ll a = max(a1,b1);
    ll b = min(a1,b1);
    int c = 0;
    // cout << a <<" " << b << endl;
    while (true)
    {
        c = c + (a / b);
        if(a % b == 0) break;
        int k = a % b;
        a = b;
        b = k;
    }
    cout << c << endl;
    
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