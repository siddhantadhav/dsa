#include <bits/stdc++.h>

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
typedef vector<vector<int>> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<int, char> pic;
typedef pair<int, string> pis;

#define PI 3.14159;

int fnFindLargestElement(int *arr, int n){
	int mx = 0;
	for(int i=0; i<n; i++) if (arr[i] > mx) mx = arr[i];
	return mx;
}

int fnFindSecondLargest(vector<int> v){
	int mn = 0;
	int mx = 0;

	for(int i=0; i<v.size(); i++) {
		if (v[i] > mx){
			mn = mx;
			mx = v[i];
		}
		else if (v[i] > mn && (mx != v[i]) || mn == 0){
			mn = v[i];
		}
	}

	return (mx == mn) ? -1:mn;
}

bool fnCheckSortedNRotated(vector<int> &nums){
	int cnt = 0;
	int n = nums.size();

	for(int i=0; i<n; i++){
		if (nums[i] > nums[(i + 1) % n]) cnt++;
	}
	return (cnt > 1)?false:true;
}

void removeDuplicates(vector<int> &nums){
	int n = nums.size();
	if (n<2) return;
	
	int index = 1;
	for(int i=1; i<n; i++){
		if(nums[i] != nums[i-1]) {
			nums[index] = nums[i];
			index++;
		}
	}
	nums.resize(index);

	for(int i=0; i<nums.size(); i++){
		cout << nums[i] << " ";
	}
}

void rotateArray(vector<int> &nums, int k){
	while(k--){
		int t = nums[-1];
		nums.erase(nums.end() - 1);
		nums.insert(nums.begin(), t);
	}

	for(int i=0; i<nums.size(); i++) cout << nums[i] << " ";
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

    // int arr[n];
    // for(int i=0; i<n; i++) cin >> arr[i];
    // cout << fnFindLargestElement(arr, n) << "\n";

    // vector<int> v;
    // for(int i=0; i<n; i++){
    // 	int t;
    // 	cin >> t;
    // 	v.push_back(t);
    // }
	// cout << fnFindSecondLargest(v) << "\n";

	vector<int> nums;

	while(n--){
		int t;
		cin >> t;
		nums.push_back(t);
	}

	int k;
	cin >> k;

	// cout << fnCheckSortedNRotated(nums);
	// removeDuplicates(nums);

	rotateArray(nums, k);

    return 0;
}