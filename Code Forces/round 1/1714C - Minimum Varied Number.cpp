#include<bits/stdc++.h>
using namespace std;
#define fast       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          fast
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
#define fo(n)      for(int i = 0;i<n;i++)
#define local


int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    test(t) {
        int s;
        cin >> s;

        int x = 9;
        stack<int> ans;
        while(s > 0) {
            if((s - x) >= 0){
                ans.push(x);
                s -= x;
            }
            x--;
        }

        while(!ans.empty()) {
            cout << ans.top();
            ans.pop();
        }
        cout << endl;
    }
}