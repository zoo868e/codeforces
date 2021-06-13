#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n;
	vector<long long int> a, b;
	cin >> n;
	a.resize(n);
	b.resize(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[i] = a[i];
	}
	int i = 0;
	while(i < n - 1 && a[i] < a[i + 1])i++;
	int start = i;
	while(i < n - 1 && a[i] > a[i + 1])i++;
	int end = i;
	while(i < n - 1 && a[i] < a[i + 1])i++;
	sort(&a[start], &a[end + 1]);
	sort(b.begin(), b.end());
	cout << endl;

	for(i = 0;i < n && a[i] == b[i];i++);
	if(i == n)cout << "yes\n" << start + 1 << " " << end + 1;
	else cout << "no\n";
}

int main(){
	solve();
	return 0;
}

