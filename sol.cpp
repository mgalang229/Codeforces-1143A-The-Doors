#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	int a[n] = {0};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int left = 0;
	int right = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			left = i + 1;
		} else {
			right = i + 1;
		}
	}
	cout << min(left, right) << '\n';
	return 0;
}
