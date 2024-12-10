#include <bits/stdc++.h>

using namespace std;

void twoSums(vector<int> &nums, int *targer){

}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> nums(n, 0);

    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}