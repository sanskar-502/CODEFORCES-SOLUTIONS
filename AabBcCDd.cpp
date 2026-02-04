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


*/



void sanskar_502() {
    int n;
    string s;
    cin>>n;
    cin>>s;


    vector<int> chars(26, 0);

    for(int i=0; i<n; i++){
        char ch= s[i];
        ch = tolower(ch);

        chars[ch - 'a']++;
    }

    sort(chars.begin(), chars.end(), greater<int>());

    if(chars.size() >= 2){
        cout<<chars[0] + chars[1]<<nl;
    }else{
        cout<<chars[0]<<nl;
    }
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