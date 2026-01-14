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
al + (al + 1) + (al + 2) ... + ar =  1/2 (al + ar) * (r- l + 1)

6
3 -2 4 -1 -4 0

[−2.5, −2, −1.5, −1, −0.5 ,0]

ap exists here so that i can check common difference here b/w two numbers
*/



void sanskar_502() {
    int n;
    cin >> n;

    vector<double> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];


    int mini_cnt = INT_MAX;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            double cm_diff = (arr[j] - arr[i]) / (j - i);
            int cnt = 0;

            /* middle part i -> j */
            double prev = arr[i];
            for (int k = i + 1; k <= j; k++) {
                double expected = prev + cm_diff;
                if (fabs(arr[k] - expected) > 1e-9) {
                    cnt++;
                    prev = expected;
                } else {
                    prev = arr[k];
                }
            }

            /* left side */
            prev = arr[i];
            for (int k = i - 1; k >= 0; k--) {
                double expected = prev - cm_diff;
                if (fabs(arr[k] - expected) > 1e-9) {
                    cnt++;
                    prev = expected;
                } else {
                    prev = arr[k];
                }
            }

            /* right side */
            prev = arr[j];
            for (int k = j + 1; k < n; k++) {
                double expected = prev + cm_diff;
                if (fabs(arr[k] - expected) > 1e-9) {
                    cnt++;
                    prev = expected;
                } else {
                    prev = arr[k];
                }
            }

            mini_cnt = min(mini_cnt, cnt);
        }
    }

    if(mini_cnt == INT_MAX){
        cout<<0<<endl;
        return;
    }

    cout << mini_cnt << "\n";
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