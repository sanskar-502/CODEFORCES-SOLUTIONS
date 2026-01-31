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
0001

0 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 1

*/



void sanskar_502() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    if(n== 1){
        if (s[0] == '0'){
            cout<<1<<nl;
            return;
        }
    }

    if(n== 2){
        if (s[0] == '0' && s[1] == '0'){
            cout<<1<<nl;
            return;
        }
    }
    

    int curr= 0;

    for(int i=0; i<n; i++){
        if(s[i] == '1') curr++;
    }


    // for(int i=0; i<n; i++){
    //     if(s[i] == '0'){
         
    //         bool left = (i == 0) || (s[i-1] == '0');
      
    //         bool right = (i == n-1) || (s[i+1] == '0');
            
    //         if(left && right){
    //             s[i] = '1';
    //             curr++;
    //         }
    //     }
    // }

    vector<int> gaps;
    gaps.push_back(-1);

    for(int i=0; i<n; i++){
        if(s[i] == '1') gaps.push_back(i);
    }

    gaps.push_back(n);

    if(gaps.size() == 2){
        cout<<(n+2)/3<<nl;
        return;
    }


    for(int i=0; i<gaps.size()-1; i++){
        int sz= gaps[i+1] - gaps[i];
        if (i == 0 || i == gaps.size() - 2) {
            curr += sz / 3;
        } else {
            curr += (sz - 1) / 3;
        }
    }

    cout<<curr<<nl;
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