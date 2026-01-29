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

1 2 3  --> 1 2 5   --> 1 6 5

4 6 5
4 6 5


1 7 5

1 7 5 6
2 9 5 6

*/



void sanskar_502() {
    int n;
    cin>>n;

    vi a(n), b(n);

    for(int i=0; i<n; i++)  cin>>a[i];
    for(int i=0; i<n; i++)  cin>>b[i];

    bool check = true;

    if(n==1){
        if( a[0] > b[0]){
            cout<<"No"<<nl;
        }else{
            cout<<"Yes"<<nl;
        }
        return;
    }

    for(int i=0; i<n ; i++){
        if(a[i]!=b[i]){               // a==b
            check = false;
            break;
        }
    }

    if(check){
        cout<<"Yes"<<nl;
        return;
    }

    check= true;

     for(int i=0; i<n ; i++){
        if(a[i] > b[i]){   // a > b
            check = false;
            break;
        }
    }

    if(!check){
        cout<<"No"<<nl;
        return;
    }






    vector<int> prefMaxi(n);
    prefMaxi[0]= a[0];

    for(int i=0; i<n; i++){
        if(i!=0)
            prefMaxi[i]= max(prefMaxi[i-1], a[i]);
    }

    int limit=-1;

    for(int i=n-1; i>=0; i--){
        if(a[i]== b[i]){
            continue;
        }
        if(i != 0 && prefMaxi[i-1] >= a[i]){
            cout<<"No"<<nl;
            return;
        }
    }


    cout<<"Yes"<<nl;










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