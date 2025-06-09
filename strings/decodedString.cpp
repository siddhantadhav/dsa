#include <bits/stdc++.h>

using namespace std;

string bruteForce(string s){
	string decoded = "";
	int n = s.size();

	for(int i=0; i<n; i++){
		if(isalpha(s[i])) decoded += s[i];
		if(isdigit(s[i])) {
			int repeat = s[i] - '0';
			string temp = decoded;
			for(int j=1; j<repeat; j++){
				decoded += temp;
			}
		}
	}

	return decoded;
}

string decodeAtIndex(string s, int k) {
  long long size = 0;

  for (char c : s) {
      if (isdigit(c)) {
          size *= (c - '0');
      } else {
          size++;
      }
  }

  for (int i = s.size() - 1; i >= 0; --i) {
      char c = s[i];
      k %= size;  

      if (k == 0 && isalpha(c)) {
          return string(1, c);
      }

      if (isdigit(c)) {
          size /= (c - '0'); 
      } else {
          size--; 
      }
  }

  return "";  
}

string decodeAtIndex(string s){
	return bruteForce(s);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
  #endif

  string s = "leet2code3";

  cout << decodeAtIndex(s);

  return 0;
}