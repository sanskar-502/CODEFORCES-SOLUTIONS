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

3 snowBalls --> head(a), torso(b)  and legs(c)   a<b<c
3 conveyor belt -->  n balls producing

how many valid for a to b  and b to c

*/



void sanskar_502() {
    int n;
    cin>>n;

    vector<int> a(n), b(n), c(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    for(int i=0; i<n; i++){
        cin>>c[i];
    }
    
    int j=0;
    long long a_to_b_cycle =0;

    while(j < n){
        bool flag= true;

        for(int i=0; i<n; i++){

        if( a[i] < b[(i + j) %n]){
            continue;
        }else{
            flag= false;
            break;
        }
        }

        if(flag)
            a_to_b_cycle++;

        j++;
    }


    j=0;
    long long b_to_c_cycle=0;

    while(j < n){
        bool flag= true;

        for(int i=0; i<n; i++){

        if( b[i] < c[(i + j) %n]){
            continue;
        }else{
            flag= false;
            break;
        }
    }

    if(flag)
            b_to_c_cycle ++;
        j++;

    }


    long long tot= n * a_to_b_cycle * b_to_c_cycle * 1LL;

    cout<<tot<<nl;
    


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