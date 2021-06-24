#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, ret = 1;
	cin >> n;
	vector<int> a;
	a.resize(n);
	for(int i = 0;i < n;i++)cin >> a[i];
	sort(a.begin(), a.end());
	for(int i = 0;i < n;i++){
		if(i + 1 >= a[i])ret = i + 2;
	}
	cout << ret << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

