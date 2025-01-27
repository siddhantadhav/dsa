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

// https://leetcode.com/problems/reverse-integer/description/
int reverse(int x){
    if(x == INT_MIN) return 0;

    int num = 0;
    int sign = (x < 0) ? -1 : 1;
    x = abs(x);

    while(x>0){
        int digit = x%10;
        x = x/10;
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
            return 0; 
        }
        if (num < INT_MIN / 10 || (num == INT_MIN / 10 && digit < INT_MIN % 10)) {
            return 0;
        }
        num = num*10+digit;
    }
    
    return num * sign;
}

// https://leetcode.com/problems/palindrome-number/
void isPalindrome(int x){
    
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

    // cout << count_digits(n) << endl;
    cout << reverse(n) << "\n";

    return 0;
}