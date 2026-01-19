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
9
9-3=6 a
6-3= 3 b
a??

odd --> loose
36 18 9
A  B  A
not power of 2--> w
power of 2 ---> odd --> loose
power of 2 ---> even --> win

odd ---> loose


*/
// int MAX= 1e9;
// vector<int> dp;

// void pre_compute(){

//     dp.assign(MAX + 1, 0); // dp[i] = 0 (L), 1 (W)

//     dp[1] = 0; // Losing

//     for (int i = 2; i <= MAX; i++) {
//         dp[i] = 0; // assume losing

//         for (int j = 2; j * j <= i; j++) {
//             if (i % j == 0) {
//                 int d1 = j;
//                 int d2 = i / j;

//                 if (i - d1 >= 1 && dp[i - d1] == 0)
//                     dp[i] = 1;

//                 if (d1 != d2 && i - d2 >= 1 && dp[i - d2] == 0)
//                     dp[i] = 1;
//             }
//         }
//     }
// }

void sanskar_502() {
     ll n;
    cin >> n;

    if (n & 1) {
        cout << "Bob" << nl;
        return;
    }

    // Count power of 2
    int cnt = 0;
    while (n % 2 == 0) {
        n /= 2;
        cnt++;
    }

    if (n > 1) {
        // not a power of 2
        cout << "Alice" << nl;
    } else {
        if (cnt & 1)
            cout << "Bob" << nl;
        else
            cout << "Alice" << nl;
    }


}




int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // pre_compute();

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