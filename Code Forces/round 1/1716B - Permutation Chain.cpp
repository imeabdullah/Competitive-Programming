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
        cout << n << endl;
        vector<int> vec;
        for(int i = 1;i<=n;i++) {
            vec.push_back(i);
        }
        fo(n) {
            cout << vec[i] << " ";
        }
        cout << endl;
        int p1 = n-1,p2 = n-2;

        while(p1 > 0) {
            swap(vec[p1],vec[p2]);
            fo(n) {
                cout << vec[i]<<" ";
            }
            cout << endl;
            p1--;
            p2--;
        }
    }
}