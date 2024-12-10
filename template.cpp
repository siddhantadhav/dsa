#include <iostream>
#include <vector>

using namespace std;

#define FOREACH(x,n) for (auto x : v)
#define FORN(n) for (int i=0; i<n; i++)
#define FOR(start, stop, s) for(int i=start; i<(stop); i+=(s))
#define arrinput(arr, n) for(int i=0; i<n; i++) cin>>arr[i];
#define pb push_back

typedef long l;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pi;
typedef pair<int, string> ps;

#define PI 3.14159;

void solve() {

}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    void solve();

    vi arr(4,0);
    // int arr[4];
    arrinput(arr, 4);

    cout << arr[3];

    return 0;
}