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
 number of a > no. of b
 number of a > no. of c
 length at least 2

 so minimum 2a substring can formed-->   aa    or  3 aba or aca

 abcabcacaca

 abaa
 abca

 sorry 4 also exist 
 wtf i am doing here 

 bbccaaa
 abcabcabaca

 fu** my mind...
 a b b a c c a

a b c b c a

*/



void sanskar_502() {
    int n;
    cin>>n;

    string s;
    cin>>s;
    bool found2 = false;
    bool found3 = false;
    bool found4 = false;
    bool found7 = false;

   for(int i=0; i<n; i++){

    if(s[i] == 'a' && i+1 < n && s[i] == s[i+1]){
        found2= true;
    }

    if(s[i] == 'a' && i+2 < n && s[i] == s[i+2]){
        found3 = true;
    }

    if(s[i] == 'a' &&  i+3 < n  && s[i]== s[i+3] && s[i+1] != s[i+2])
        found4= true;

    if( i+6 < n ){
        unordered_map<int, int> mp;

        for(int j= i ; j <= i+6 ; j++){
            mp[s[j] - 'a']++;
        }

        if(mp['a' - 'a'] > mp['b' - 'a'] &&  mp['a' - 'a'] > mp['c' - 'a']  )
            found7= true;
    }

   }

    if(found2)
        cout<<2<<nl;
    else if(found3)
        cout<<3<<nl;
    else if(found4)
        cout<<4<<nl;
    else if(found7)
        cout<<7<<nl;
    else 
        cout<<-1<<nl;
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