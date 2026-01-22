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
1  watch  free acquired each day
sell two watches for ai coins

max profit??

*/

vector<vector<ll>> dp;

ll solve(int i, vector<int> & arr, int n, int currWatch){

    if(i == n) return 0;

    if (currWatch > n) currWatch = n;

    if(dp[i][currWatch] != -1) return dp[i][currWatch];

  

    ll not_sell = solve(i + 1, arr, n, currWatch + 1);

    ll sell1 = 0;
    ll sell2 = 0;

    if(currWatch >= 0){ 
        sell1 = arr[i] + solve(i + 1, arr, n, currWatch);
    }

    if(currWatch >= 1){
        sell2 = 2LL * arr[i] + solve(i + 1, arr, n, currWatch - 1);
    }

    return dp[i][currWatch] = max({not_sell, sell1, sell2});
}


void sanskar_502() {
    int n;
    cin >> n;

    vi arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];

    dp.assign(n + 1, vector<ll>(n + 2, -1));

    cout << solve(0, arr, n, 0) << nl;
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