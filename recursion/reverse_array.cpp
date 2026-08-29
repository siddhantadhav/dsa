#include <bits/stdc++.h>

using namespace std;

void reverse_array(int cnt, int arr[], int n) {
    if (cnt > n/2) {
        return;
    }
    swap(arr[cnt], arr[n-cnt-1]);
    reverse_array(cnt+1, arr, n);
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    reverse_array(0, arr, n);

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}