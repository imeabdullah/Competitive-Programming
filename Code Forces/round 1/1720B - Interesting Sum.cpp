#include<bits/stdc++.h>
using namespace std;
#define fast       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          fast
#define ss          second
#define test(t)     int t; cin >> t; while(t--)
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
        for(int i = 0;i<n;i++) {
            cin >> vec[i];
        }

        sort(vec.begin(),vec.end());
        cout<< ((vec[n-1] - vec[0]) + (vec[n-2] - vec[1])) << endl;
    }
}