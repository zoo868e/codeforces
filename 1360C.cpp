#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, d2 = 0;
	cin >> n;
	vector<int> a;
	a.resize(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
		if(a[i] % 2)d2++;
	}
	d2 = d2 > n - d2 ? d2:(n - d2);
	sort(a.begin(), a.end());
	int near = 0;
	for(int i = 0;i < n - 1;i++){
		if(a[i] + 1 == a[i + 1]){
			near++;
			i++;
		}
	}
	if(d2 % 2 == 0)cout << "YES\n";
	else if(near > 0)cout << "YES\n";
	else cout << "NO\n";

}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

