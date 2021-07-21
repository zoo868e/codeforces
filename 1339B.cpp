#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a, ans;
	for(int i = 0;i < n;i++){
		int t;
		cin >> t;
		a.push_back(t);
	}
	sort(a.begin(), a.end());
	int s = a.size();
	while(s > 0){
		int idx = s / 2;
		ans.push_back(a[idx]);
		a.erase(a.begin() + idx);
		s--;
	}
	for(int i = 0;i < (int)ans.size();i++){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

