#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '
#define pi 2 * acos(0.0)

#define ll long long
#define ld long double
#define vstr vector<string>
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()

#define len(x) int((x).size())
#define pb push_back

bool odd(ll num) { return ((num & 1) == 1); }
bool even(ll num) { return ((num & 1) == 0); }

/* Result and Observations
n length string
k colours
each colour must be assign to string

11 2
abcabcabcac

a->4  aa   aa
b->3  bb    a
c->4  cc   cc


8 2
bxyaxzay

b-> 1       
x-> 2      x x
y-> 2      y y
a -> 2     a a
aaaaa
k=3


count pair + remaning


*/



void sanskar_502() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<char, int> mp;

    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }

    int tot_pair=0;
    int rem_ele=0;

    for(char ch= 'a' ; ch<= 'z'; ch++){
        if(mp.find(ch) == mp.end()) continue;
        int tot_ele= mp[ch];
        int pairs= tot_ele/2;
        mp[ch] -= pairs*2;
        rem_ele += mp[ch];
        tot_pair+= pairs;
    }

    int pairs_per_group = tot_pair / k;
    int ans = pairs_per_group * 2;


    rem_ele += (tot_pair % k) * 2;
    if(rem_ele >= k){
        ans++;
    }

    cout << ans << nl;
    


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
        sanskar_502();
}

/*
    Golden Rules:
    Solutions are simple.
    Proofs are simple.
    Implementations are simple.
*/