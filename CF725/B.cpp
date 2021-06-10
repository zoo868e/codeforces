#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a;
	a.resize(n);
	for(int i = 0;i < n;i++)cin >> a[i];
	sort(a.begin(), a.end());
	if(n == 1){
		cout << 0 << endl;
		return;
	}
	else{
		int sum = 0, mean = 0;
		for(int i = 0;i < n;i++)mean += a[i];
		if(mean % n){
			cout << -1 << endl;
			return;
		}
		else mean = mean / n;
		for(int i = 0;i < n;i++){
			if(a[i] > mean)sum++;
		}
		cout << sum << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

