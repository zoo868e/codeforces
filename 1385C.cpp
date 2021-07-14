#include"bits/stdc++.h"

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	if (n == 1)cout << "0\n";
	else{
		int i = n - 1;
		while(i > 0 && a[i - 1] >= a[i])i--;
		while(i > 0 && a[i - 1] <= a[i])i--;
		cout << i << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

