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
        ll n;
        cin >> n;
        ll max_x = 0;
        ll min_x = 0;
        ll max_y = 0;
        ll min_y = 0;


        fo(n) {
            ll x, y;
            cin >> x >> y;
            if(x < 0) {
                min_x = min(min_x,x);
            }
            if(x >= 0) {
                max_x = max(max_x,x);
            }
            if(y < 0) {
                min_y = min(min_y,y);
            }
            if(y >= 0) {
                max_y = max(max_y,y);
            }
        }
        ll width = abs(min_x) + abs(max_x);
        ll height = abs(min_y) + abs(max_y);
        cout << (width * 2) + (height * 2) << endl;
    }
}