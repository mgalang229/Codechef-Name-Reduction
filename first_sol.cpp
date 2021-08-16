#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string a, b;
		cin >> a >> b;
		vector<int> parent_counter(26, 0);
		// count the letters in string 'a'
		for (int i = 0; i < (int) a.size(); i++) {
			parent_counter[a[i] - 'a']++;
		}
		// count the letters in string 'b'
		for (int i = 0; i < (int) b.size(); i++) {
			parent_counter[b[i] - 'a']++;
		}
		int n;
		cin >> n;
		string all = "";
		for (int i = 0; i < n; i++) {
			// concatenate all the string 'c' to string 'all'
			string c;
			cin >> c;
			all += c;
		}
		// count the letters in string 'all' (separate counter)
		vector<int> child_counter(26, 0);
		for (int i = 0; i < (int) all.size(); i++) {
			child_counter[all[i] - 'a']++;
		}
		bool checker = true;
		// check if the frequency of the letters in string 'all' is less than 
		// or equal to the frequency of the letters in string 'a'
		for (int i = 0; i < 26; i++) {
			if (child_counter[i] > parent_counter[i]) {
				// if there is a case wherein the frequency of a letter from string 'all'
				// is greater than the frequency of this letter in string 'a', then it is
				// not a permutation of string 'a'
				checker = false;
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
