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

/*
3 4 5 6 7 8 9
-5 -10 -15




*/
ll solve(const vector<int>& arr, int k) {
    ll sum = 0;
    for (int i = arr.size() - 1; i >= 0; i -= k) {
        sum += 2LL * arr[i];
    }
    return sum;
}

void sanskar_502() {
    int n, k;
    cin >> n >> k;

    vi pos;
    vi neg;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            pos.pb(x);
        } else {
            neg.pb(abs(x));
        }
    }

    sort(all(pos));
    sort(all(neg));


    ll posTotal = solve(pos, k);
    ll negTotal = solve(neg, k);
    
    ll total_dist = posTotal + negTotal;
    
    int max_pos = pos.empty() ? 0 : pos.back();
    int max_neg = neg.empty() ? 0 : neg.back();

    ll ans = total_dist - max(max_pos, max_neg);

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