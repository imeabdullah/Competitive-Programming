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

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    if(b > c) {
        if(a > (b - 1)) {
            cout << 2 << endl;
        }
        else if(a < (b-1)) cout << 1 << endl;
        else cout << 3 << endl;
    } else {
        if(a > (abs(b - c) + (c - 1))) cout << 2 << endl;
        else if(a < (abs(b - c) + (c - 1))) cout << 1 << endl;
        else cout << 3 << endl;
    }
   
}

int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 
    test(t) {
        solve();
    }
}