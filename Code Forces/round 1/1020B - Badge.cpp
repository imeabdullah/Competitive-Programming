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
    cin >> n;
    vector<int> student(n + 1);

    fo(1,n+1) cin >> student[i];
    for(int i = 1;i<=n;i++) {
        map<int,int> mp;
        mp[i] = 1;
        int curr = student[i];
        while(true) {
            mp[curr] ++;
            if(mp[curr] > 1) {
                break;
            }
            curr = student[curr];
        }
        cout << curr << " ";
        
    }

}

int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    solve();
}