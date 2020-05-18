#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[] = {1,2,3,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	int num;
	cin >> num;
	auto r = equal_range(a, a+n, num);
	cout << r.second-r.first<< "\n";
	return 0;
}
