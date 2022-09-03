#include<bits/stdc++.h>
using namespace std;
#define fast       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          first
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(n)       for(int i = 0;i<n;i++)
#define rfo(n)      for(int i = n-1;i>=0;i--)
#define yes         cout << "YES" << endl;
#define no          cout << "NO" << endl;
#define mod         1e9+7
#define local

int n;

int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    test(t) {
        cin >> n;
        vector<int> ans;
        for(int i = n;i>=1;i-=2) {
            if(i == 1) ans.push_back(i);
            else {
                ans.push_back(i-1);
                ans.push_back(i);
            }
        }
        rfo(n) {
            cout << ans[i] <<" ";
        }
        cout << endl;
    }
}