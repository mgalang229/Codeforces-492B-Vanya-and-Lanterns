#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, l;
	cin >> n >> l;
	int a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	sort(a, a+n);
	int res=2*max(a[0], l-a[n-1]);
	for(int i=0; i<n-1; ++i)
		res=max(res, a[i+1]-a[i]);
	cout << fixed << setprecision(10) << (double)res/2 << "\n";
}
