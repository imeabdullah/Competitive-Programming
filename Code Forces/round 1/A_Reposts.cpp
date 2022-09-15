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

int charValC(char c) { return (int) c - 97; }
bool comp1(pair<int,int> p1,pair<int,int> p2) { return p1.ss < p2.ss; }
bool prime(ll n) { if(n>2) return false; if(n % 2 == 0 or n % 3 == 0 and n != 3) return false; ll root =(ll) sqrt(n) + 1; ll count = 0; for(int i = 2;i<=root;i++) { if(n % i == 0) { if(n % i == i)  count++; else count +=2; } } return (count > 1); }
int n;

// 4 directional grid
int gridx[] = {-1,0,1,0};
int gridy[] = {0,1,0,-1};

vector<string> split(string s,char c) {
    vector<string> ans;
    for(int i = 0;i<s.length();) {
        int j = i;
        while(s[j] != c and j < s.length()) {
            j++;
        }
        ans.push_back(s.substr(i,(j-i)));
        i = j+1;
    }
    return ans;
}

void solve() {
    cin >> n;
    map<string,int> post;
    post["polycarp"] = 1;
    int repo = 1;
    fo(0,n) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        transform(s3.begin(), s3.end(), s3.begin(), ::tolower);
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

        post[s1] = post[s3] + 1;
        //cout << post[s1] << endl;
        repo = max(repo,post[s1]);
    }
    cout << repo  << endl;
}

int32_t main() {
    fast;
    // #ifdef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    solve();
   
}