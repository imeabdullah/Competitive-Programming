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

int main() {
    fast;
    #ifdef local
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    test(t) {
        int x;
        cin >> n >> x;
       
        vector<int> vec(2*n);
        fo(0,2*n) cin >> vec[i];
        sort(vec.begin(),vec.end());
        int j = n; 
        bool f = 1;
        fo(0,n) {
            if(abs(vec[i] - vec[j]) < x) {
                f = 0;
                break;
            }
            j++;
        }
        if(f) yes;
        else no;
    }
}