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

#define MOD 998244353

ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}


ll fact(int n) {
    ll res = 1;
    for (int i = 2; i <= n; i++)
        res = (res * i) % MOD;
    return res;
}

/* Result and Observations
3
11 1 10

1 10 11      0  9  10
1 11 10      0  10  9

longest continuous sequence is requuired  so i can form mex like 1 2 3 etc

so i have to put the longest sequence first at the permunation..
 2 * power(4-1 )=  8 
to get mex...
basically i have to pickup +1 and -1 number at a time so i have two options to make continuos segment 0 1 2 3

i have to change two current parameter current min or maximum  so 2^l-1
and suffle remaining element= (n -l)! randomnly


*/



void sanskar_502() {
    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int l = 1; 
    int maxil = 1; 

   
    for(int i=0; i<n-1; i++){
        if(a[i+1] == a[i] + 1){
            l++;
        } else {
            maxil = max(l, maxil);
            l = 1;
        }
    }

    maxil = max(l, maxil);


    int cnt = 0;
    l = 1; 

    for(int i=0; i<n-1; i++){
        if(a[i+1] == a[i] + 1){
            l++;
        } else {
            if(l == maxil){
                cnt++;
            }
            l = 1;
        }
    }

    if(l == maxil){
        cnt++;
    }


    
    ll term1 = cnt; 
    ll term2 = power(2, maxil - 1);
    ll term3 = fact(n - maxil); 

    ll ans = (term1 * term2) % MOD;
    ans = (ans * term3) % MOD;

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