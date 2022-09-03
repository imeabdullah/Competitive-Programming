#include<bits/stdc++.h>
using namespace std;
#define fast       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          fast
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(n)       for(int i = 0;i<n;i++)
#define rfo(n)      for(int i = n-1;i>=0;i--)
#define local


int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    test(t) {
        int n;
        cin >> n;
        vector<int> vec(n);
        vector<int> vis(n+1,0);        
        fo(n) cin >> vec[i];

        int f = -1;
        rfo(n) {
            if(vis[vec[i]] == 1) {
                f = i;
                break;
            } else {
                vis[vec[i]] = 1;
            }
        }
        cout << f+1 << endl;
    }
}