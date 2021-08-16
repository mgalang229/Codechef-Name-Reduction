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
		// combine string 'b' to string 'a'
		a += b;
		int n;
		cin >> n;
		string all = "";
		for (int i = 0; i < n; i++) {
			// combine all 'c' strings in string 'all'
			string c;
			cin >> c;
			all += c;
		}
		// sort string 'a' in lexicographical order
		sort(a.begin(), a.end());
		// sort string 'all' in lexicographical order
		sort(all.begin(), all.end());
		int index = 0;
		// check if all the letters in string 'all' are present in string 'a'
		for (int i = 0; i < (int) a.size(); i++) {
			if (a[i] == all[index]) {
				index++;
			}
		}
		cout << (index == (int) all.size() ? "YES" : "NO") << '\n';
	}
	return 0;
}
