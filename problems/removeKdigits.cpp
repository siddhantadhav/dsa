#include <bits/stdc++.h>

using namespace std;

// Intution
// keep smaller digits at the start
// get rid of k larger elements from the start 

// edge case k <= n if k = n return 0
// if leading with zeros remove them
// 

string removeKdigits(string num, int k){
	vector<char> st;

	int n = num.size();

	for(int i=0; i<n; i++){
		// subtracting from '0' gives digit value
		while(!st.empty() && k>0 && ( (st.back() - '0') > (num[i] - '0'))){
			st.pop_back();
			k--;
		}	
		st.push_back(num[i]);
	}

	while(k>0) {
		st.pop_back();
		k--;
	}

	if(st.empty()) return "0";

	vector<char> res;

	while(!st.empty()){
		res.push_back(st.back());
		st.pop_back();
	}

	while(!res.empty() && res.back() == '0'){
		res.pop_back();
	}

	// does not return anything
	reverse(res.begin(), res.end());

	if(res.empty()) return "0";

	string final;

	for(auto ch: res){
		final = final + ch;
	}

	return final;
}

string removeKdigits(string num, int k) {
    vector<char> st;

    for (char digit : num) {
        while (!st.empty() && k > 0 && st.back() > digit) {
            st.pop_back();
            k--;
        }
        st.push_back(digit);
    }

    // If k > 0, remove the remaining digits from the end
    while (k > 0 && !st.empty()) {
        st.pop_back();
        k--;
    }

    // Build the result string, skipping leading zeros
    string result;
    bool leadingZero = true;

    for (char digit : st) {
        if (leadingZero && digit == '0') continue;
        leadingZero = false;
        result += digit;
    }

    return result.empty() ? "0" : result;
}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	string num = "1432219";
	int k = 3;

	cout << removeKdigits(num, k);

	return 0;
}