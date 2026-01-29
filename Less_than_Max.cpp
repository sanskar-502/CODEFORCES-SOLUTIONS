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
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++)  cin>>arr[i];


    // unordered_map<int, bool> mp;
    // // vector<bool> mp(101, false);
    

    int cnt=0;

    // for(int i=0; i<n; i++){
    //     if(arr[i]==1){
    //         mp[1]= true;
    //         cnt++;
    //         continue;
    //     }

    //     if(mp[arr[i] - 1] == true){
    //         cnt++;
    //     }

    //     mp[arr[i]]= true;
    // }

    // cout<<cnt<<nl;

    vector<int> ans;

    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            ans.push_back(arr[i]);
            cnt++;
            continue;
        }  
        for(int j=0; j<ans.size(); j++){
            if(ans[j] == (arr[i] - 1)){
                cnt++;
                ans.push_back(arr[i]);
                break;
            }
        }
    }

    cout<<cnt<<nl;

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