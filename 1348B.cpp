#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n, k, t;
	cin >> n >> k;
	int a[n];
	vector<int> exceed;
	memset(a, 0, sizeof(a));
	for(int i = 0;i < n;i++){
		cin >> t;
		a[t - 1]++;
		if(a[t - 1] == 1)exceed.push_back(t);
	}
	string par = "";
	if((int)exceed.size() > k){
		cout << -1 << endl;
		return;
	}
	else {
		cout << n * k << endl;
		for(int i = 0;i < n;i++){
			int j = 0;
			for(;j < (int)exceed.size();j++){
				cout << exceed[j] << " ";
			}
			while(j < k){
				cout << 1 << " ";
				j++;
			}
		}
		cout << endl;
	}
//	cout << "par = " << par << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

