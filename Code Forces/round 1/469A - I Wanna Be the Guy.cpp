#include<bits/stdc++.h>
using namespace std;
#define fast       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl        "\n"
#define ll          long long
#define ff          fast
#define ss          second
#define local


int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin >> n;
    vector<int> vec(n+1,0);

    int p;
    cin >> p;
    for(int i=0;i<p;i++) {
        int x;
        cin >> x;
        vec[x] = 1;
    }

    cin >> p;
    for(int i=0;i<p;i++) {
        int x;
        cin >> x;
        vec[x] = 1;
    }
    for(int i = 1;i<=n;i++) {
        if(vec[i] != 1) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
}