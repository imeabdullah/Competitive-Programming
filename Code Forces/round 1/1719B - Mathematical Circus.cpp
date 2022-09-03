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
        int n, k;
        cin >> n >> k;

        if(k & 1) {
            cout << "YES" << endl;
            for(int i = 1;i<n;i+=2) {
                cout << i << " " <<i+1 << endl;
            }
        } else  {
            if(k % 4 == 0) {
                cout << "NO" << endl;
            } else  {
                cout << "YES" << endl;
                bool f = 0;
                for(int i = 1;i<n;i+=2) {
                    if(f == 0) {
                        cout << (i+1) << " " << i << endl;
                    } else {
                        cout << i << " " << i+1 << endl;
                    }
                    f = !f;
                }
            }
        }
    }
}