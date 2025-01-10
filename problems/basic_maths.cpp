#include <bits/stdc++.h>

using namespace std;

#define FOREACH(x,n) for (auto x : v)
#define FORN(n) for (int i=0; i<n; i++)
#define FOR(start, stop, s) for(int i=start; i<(stop); i+=(s))
#define arrinput(arr, n) for(int i=0; i<n; i++) cin>>arr[i];
#define pb push_back

typedef long l;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, char> pic;
typedef pair<int, string> pis;

#define PI 3.14159

int count_digits(int n){
    int dividend = n;
    int count = 0;

    while(n>0){
        int divisor = n%10;
        if(divisor != 0 && dividend%divisor == 0){
            count++;
        }
        n=n/10;
    }

    return count;
}



int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // count digits
    int n;
    cin >> n;

    cout << count_digits(n) << endl;

    return 0;
}