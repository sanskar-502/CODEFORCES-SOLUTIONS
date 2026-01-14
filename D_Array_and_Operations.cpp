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

// /* Result and Observations
//     here constraint is approx n =100
//     so i can think of brute force solution

// 7 3
// 1 1 1 2 1 3 1

// 1 1 1 1 1 2 3

// simple dp

// 9 2
// 1 10 10 1 10 2 7 10 3

// 1 1 2 3 7 10 10 10 10

// in one operation how maximum element i can consume...

// 1 10 1 10 2 10 3 10 7

// */

// ll minScore;
// int n;
// vector<bool> vis;

// void solve(int pairsLeft, vector<int>& arr, ll score) {

//     if (score >= minScore) return;
//     if (pairsLeft == 0) {
//         for (int i = 0; i < n; i++) {
//             if (!vis[i]) score += arr[i];
//         }
//         minScore = min(minScore, score);
//         return;
//     }


//     for (int i = 0; i < n; i++) {
//         if (vis[i]) continue;
//         vis[i] = true;
//         for (int j = i + 1; j < n; j++) {
//             if (vis[j]) continue;
//             vis[j] = true;

//             solve(pairsLeft - 1, arr, score + (arr[i] / arr[j]));
//             solve(pairsLeft - 1, arr, score + (arr[j] / arr[i]));

//             vis[j] = false;
//         }
//         vis[i] = false;
//     }
// }


// void greedy(vector<int> & arr,int K){

//     sort(arr.begin(), arr.end());
//     long long score = 0;
//     for (int i = 0; i < K; ++i) {
//         score += arr[i] / arr[n - 1 - i];
//     }
//     for (int i = K; i < n - K; ++i) score += arr[i];
//      minScore= score;

//     if(odd(n)) score= arr[0];

//      for(int i= n-1; i >=0 && K>0 ; i = i-2, K--){

//         if(odd(n) && i==0)
//             break;
        
//         score +=  (arr[i] / arr[i-1]);

//      }

//      minScore= min(minScore, score);
// }

/*


n-2k ,  k ,   k



*/

void sanskar_502() {
    int n;
    int k;
    cin >> n >> k;

    vll arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(all(arr));

    long long score=0;

    for(int i=0;  i < n - 2*k; i++){
        score += arr[i];
    }

    for(int i= 0 ; i<k; i++){
        ll num=  arr[n - 2*k +i];
        ll den= arr[n -k +i];

        score += (num/den);
    }


    cout<<score<<nl;

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