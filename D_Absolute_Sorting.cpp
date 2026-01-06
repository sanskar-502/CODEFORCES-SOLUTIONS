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
i have array 
i have to do operation exactly once      abs (x- ai)

5 3 3 3 5
2 1 1 2


maximum diff= 2.. and what i have do to make one elment 0
5 3
4 2
3 1   
2 0 

what if 3 0      6 3     
5 2
4 1
3 0
2 1
1 2
 for reaching 0  ->  must have 3 steps min(6,3) steps  afterward  ceil((6-3)/2)= 2
 for (5, 3)    --->   must have min(5, 3)  steps  +  ceils( 5-3)/2=  1

2 1
1 2

5 3
4 2
3 1
2 0
1 1
0 2
1 3
2 4



// 5, 3  -->  4
// 3, 3 ---> 0
// 0 00 0 4

// 5 3 4 5
// 4 

// 1 1 0 1
// 



// // 5 3  ---> 4 min op
// // 3 4 ----> 4



// 10 5 4 3 2 1

// 2 3 4 5 6 7
// 10 5
// 9 4
// 8 3
// 7 2
// 6 1
// 5 0
// 4 1
// 3 2
// 2 3

// 3 5
// 2 4
// 1 3
// 0 2
// 1 1

// 3 3 1
// 2 0
// 1 1
// 1 2


// 3 6
// 2 5
// 1 4
// 0 3
// 1 2

// 2 4
// 1 3
// 0 2
// 1 1
// 2 0



3 4
2 3
1 2
0 



3 6
2 5
1 4
0 3
1 2
2 1

3 + ((6-3)/2)=  4

3 5
2 4
1 3       3 + ( 5 -3)/2 ==  3 + 1
0 2
1 1



3 4
2 3   3 + (1/2)= 3
1 2
0 1
1 0



6 3
5 2     3 + (6-3 +1)/2= 5
4 1   
3 0   
2 1
1 1

6 4
5 3    4 + (6-4 +2 )/2= 5
4 2
3 1
2 0
1 1

5 3
4 2
3 1
2 0
1 1

6 4
5 3




*/
void sanskar_502() {
    ll n;
    cin>>n;
    vll arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool flag= true;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            flag= false;
        }
    }

    if(flag){
        cout<<0<<endl;
        return;
    }

    ll minidiff= -1;
    ll maxidiff= -1;
    ll maxi=0;

    for(int i=0; i<n-1; i++){

        if(arr[i] > arr[i+1]){

        ll a= min(arr[i], arr[i+1]);
        ll b= (abs(arr[i] - arr[i+1]) + 1 ) / 2;

    
        ll diff = a+ b;
        maxi= max(maxi, diff);

        }
    }

    for(int i=0; i<n-1; i++){
        if(arr[i] < arr[i+1]){
            ll a= min(arr[i], arr[i+1]);
            ll b= (abs(arr[i] - arr[i+1])  ) / 2;
            ll diff = a + b;

            if(minidiff== -1){
                minidiff= diff;
            }

            if(maxidiff == -1){
                maxidiff= diff;
            }

            minidiff= min(minidiff, diff);
            maxidiff= max(maxidiff, diff);
        }
    }

//  so element must lies b/w  maxi <= ele <= minidiff

    if(minidiff != -1 && maxi > minidiff){      // if minidiff exists then i want answer must be less than or equal to minidiff
        cout<<-1<<endl; 
        return;
    }
        
    cout<<max(maxi, minidiff)<<endl;

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