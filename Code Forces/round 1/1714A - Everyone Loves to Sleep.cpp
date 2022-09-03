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

void solve() {
    cin >> n;
    int time, h, m;
    cin >> h >> m;
    time = 60 * h + m;
    int ans = 24 * 60;
    for(int i = 0; i < n; ++i){
        cin >> h >> m;
        int t = 60 * h + m - time;
        if(t < 0) t += 24 * 60;
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60 << endl;
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