#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s, int start, int end){
	while(start<end){
		if(s[start] != s[end]) return false;
		start++;
		end--;
	}
	return true;
}

// string tabulation(string s, vector<vector<string>> &dp){
// 	int n=s.size();
// 	if (n==0) return "";
// 	if(n==1) return s;

// 	int start = 0;
// 	int end = n-1;
// 	int maxLength = INT_MIN;
// 	int maxStart = 0;
// 	int maxEnd = 0;

// 	for(int i=0; i<n; i++){
// 		dp[i][i] = s.substr(i, 1);
// 		if (maxLength < 1) {
// 			maxLength = 1;
// 			maxStart = i;
// 			maxEnd = i;
// 		}
// 		for(int j=i+1; j<n; j++){
// 			if(isPalindrome(s, i, j)) {
// 				dp[i][j] = s.substr(i, j-i+1);
// 				if(maxLength < dp[i][j].size()){
// 					maxLength = dp[i][j].size();
// 					maxStart = i;
// 					maxEnd = j;
// 				}
// 			}
// 		}
// 	}

// 	return s.substr(maxStart, maxEnd - maxStart + 1);
// }

string tabulation(string s, vector<vector<bool>> &dp) {
	int n = s.size();
	if (n == 0) return "";
	if (n == 1) return s;

	int maxLength = 1;
	int start = 0;

	// All substrings of length 1 are palindromes
	for (int i = 0; i < n; i++) {
		dp[i][i] = true;
	}

	// Check substrings of length 2
	for (int i = 0; i < n - 1; i++) {
		if (s[i] == s[i + 1]) {
			dp[i][i + 1] = true;
			start = i;
			maxLength = 2;
		}
	}

	// Check substrings of length ≥ 3
	for (int len = 3; len <= n; len++) {
		for (int i = 0; i <= n - len; i++) {
			int j = i + len - 1;
			if (s[i] == s[j] && dp[i + 1][j - 1]) {
				dp[i][j] = true;
				if (len > maxLength) {
					start = i;
					maxLength = len;
				}
			}
		}
	}

	return s.substr(start, maxLength);
}


string memoisation(string s, int start, int end, vector<vector<string>> &dp){
	if(start>end) return "";

	if (dp[start][end] != "") return dp[start][end];
	if(isPalindrome(s, start, end)) return dp[start][end] = s.substr(start, end-start+1);

	string left = memoisation(s, start+1, end, dp);
	string right = memoisation(s, start, end-1, dp);

	return dp[start][end] = left.size() > right.size() ? left : right;
}

string bruteForce(string s, int start, int end){
	if(start>end) return "";

	if(isPalindrome(s, start, end)) return s.substr(start, end-start+1);
	string left = bruteForce(s, start+1, end);
	string right = bruteForce(s, start, end-1);

	return left.size() > right.size() ? left : right;

}

string longestPalindrome(string s){
	// vector<vector<string>> dp(s.size(), vector<string>(s.size(), ""));
	vector<vector<int>> dp(s.size(), vector<int>(s.size(), INT_MIN));
	// string ans = bruteForce(s, 0, s.size()-1);
	// string ans = memoisation(s, 0, s.size()-1, dp);
	string ans = tabulation(s, dp);
	return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  string s = "ibvjkmpyzsifuxcabqqpahjdeuzaybqsrsmbfplxycsafogotliyvhxjtkrbzqxlyfwujzhkdafhebvsdhkkdbhlhmaoxmbkqiwiusngkbdhlvxdyvnjrzvxmukvdfobzlmvnbnilnsyrgoygfdzjlymhprcpxsnxpcafctikxxybcusgjwmfklkffehbvlhvxfiddznwumxosomfbgxoruoqrhezgsgidgcfzbtdftjxeahriirqgxbhicoxavquhbkaomrroghdnfkknyigsluqebaqrtcwgmlnvmxoagisdmsokeznjsnwpxygjjptvyjjkbmkxvlivinmpnpxgmmorkasebngirckqcawgevljplkkgextudqaodwqmfljljhrujoerycoojwwgtklypicgkyaboqjfivbeqdlonxeidgxsyzugkntoevwfuxovazcyayvwbcqswzhytlmtmrtwpikgacnpkbwgfmpavzyjoxughwhvlsxsgttbcyrlkaarngeoaldsdtjncivhcfsaohmdhgbwkuemcembmlwbwquxfaiukoqvzmgoeppieztdacvwngbkcxknbytvztodbfnjhbtwpjlzuajnlzfmmujhcggpdcwdquutdiubgcvnxvgspmfumeqrofewynizvynavjzkbpkuxxvkjujectdyfwygnfsukvzflcuxxzvxzravzznpxttduajhbsyiywpqunnarabcroljwcbdydagachbobkcvudkoddldaucwruobfylfhyvjuynjrosxczgjwudpxaqwnboxgxybnngxxhibesiaxkicinikzzmonftqkcudlzfzutplbycejmkpxcygsafzkgudy";
  cout << longestPalindrome(s);

  return 0;
}