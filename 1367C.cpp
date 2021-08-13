#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n, k, ans = 0;
	cin >> n >> k;
	string s;
	cin >> s;
	for(int i = 0;i < n;){
		int j = i + 1;
		for(;j < n && s[j] != '1';j++);
		int left = s[i] == '1' ? k:0;
		int right = j < n && s[j] == '1' ? k:0;
		int len = j - i;
		if(left == k)len--;
		len -= left + right;
		if(len > 0)ans += (len + k) / (k + 1);
		i = j;
	}
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

