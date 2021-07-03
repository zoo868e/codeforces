#include"bits/stdc++.h"

using namespace std;

void solve(){
	int n;
	cin >> n;
	int w[n + 1], t, a[3 * n];
	memset(w, 0, sizeof(w));
	memset(a, 0, sizeof(a));
	for(int i = 0;i < n;i++){
		cin >> t;
		w[t]++;
	}
	for(int i = 1;i <= n;i++){
		for(int j = i;j <= n;j++){
			if(i == j)a[i + j] += w[i] / 2;
			else a[i + j] += min(w[i], w[j]);
		}
	}
	sort(a, a + 3 * n);
	cout << a[3 * n - 1] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

