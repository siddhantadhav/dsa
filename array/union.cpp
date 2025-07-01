#include <bits/stdc++.h>
using namespace std;

vector<int> unionSorted(int arr1[], int n, int arr2[], int m) {
  vector<int> arrFinal;
  int i = 0, j = 0;

  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) {
      if (arrFinal.empty() || arrFinal.back() != arr1[i])
        arrFinal.push_back(arr1[i]);
      i++;
    }
    else if (arr2[j] < arr1[i]) {
      if (arrFinal.empty() || arrFinal.back() != arr2[j])
        arrFinal.push_back(arr2[j]);
      j++;
    }
    else { // Equal elements
      if (arrFinal.empty() || arrFinal.back() != arr1[i])
        arrFinal.push_back(arr1[i]);
      i++;
      j++;
    }
  }

  while (i < n) {
    if (arrFinal.empty() || arrFinal.back() != arr1[i])
      arrFinal.push_back(arr1[i]);
    i++;
  }

  while (j < m) {
    if (arrFinal.empty() || arrFinal.back() != arr2[j])
      arrFinal.push_back(arr2[j]);
    j++;
  }

  return arrFinal;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  int n, m;
  cin >> n >> m;

  int arr1[n], arr2[m];

  for (int i = 0; i < n; i++) cin >> arr1[i];
  for (int i = 0; i < m; i++) cin >> arr2[i];

  vector<int> ans = unionSorted(arr1, n, arr2, m);

  for (int e : ans)
    cout << e << "\n";

  return 0;
}
