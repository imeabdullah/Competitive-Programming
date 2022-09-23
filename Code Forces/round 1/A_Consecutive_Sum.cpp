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
//---------------------------macros-----------------------------

int charValC(char c) { return (int) c - 97; }
bool comp1(pair<int,int> p1,pair<int,int> p2) { return p1.ss < p2.ss; }
bool prime(ll n) { if(n>2) return false; if(n % 2 == 0 or n % 3 == 0 and n != 3) return false; ll root =(ll) sqrt(n) + 1; ll count = 0; for(int i = 2;i<=root;i++) { if(n % i == 0) { if(n % i == i)  count++; else count +=2; } } return (count > 1); }
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
inline string toLower(string &s) { transform(s.begin(), s.end(), s.begin(), ::tolower); return s; }
inline string toUpper(string &s) { transform(s.begin(), s.end(), s.begin(), ::toupper); return s; }
//---------------------------Useful Functions-----------------------------
ll n, m, k;
string s;
//---------------------------global variables-----------------------------
// 4 directional grid
int gridx[] = {-1,0,1,0};
int gridy[] = {0,1,0,-1};


void solve() {
    cin >> n >> k;
    vector<int> vec(n+1);
    fo(1,(n+1)) cin >> vec[i];
    
    ll ans = 0;
    
    for(int i = 1;i<=k;i++) {
        for(int j = n;j>k;j--) {
            if(vec[j] > vec[i] and (i % k == j %k)) {
                swap(vec[i],vec[j]);
            }
        }
    }
    for(int i = 1;i<=k;i++) {
        ans += vec[i];
    }
    cout << ans << endl;
}

int32_t main() {
    fast;
    // #ifdef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    test(t) {
        solve();
    }
}

/* Final check before submit :
 
1. array size or integer overflow,like uninitialised 0 index.
 
2. Think twice,code once.check all possible counter test case.
 
3. Be careful about corner case! n=1?k=1? something about 0?
 
4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?
 
5. if got WA than remember that you are missing something common.
   *** Be confident!!! who knows? may be your one step back to AC ***
4. minus mod ans=(ans-k+mod)%mod;
 
*/
 
 
/* IF WA???
 
1. corner case! n=1?k=1? something about 0?
 
2. check code(avoid stupid mistake)
 
3. read the statement again(if there any missing point???)
 
4. check the idea(check all possible counter test case again!!!)
 
5. be calm,don't be panic!!!.(***this problem not going to decide your future***)
 
6. don't waste too much time. move to next problem
 
*/