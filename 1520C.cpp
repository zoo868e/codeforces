#include"bits/stdc++.h"
using namespace std;

void solve(){
	int n, i;
	cin >> n;
	int m[n + 1][n + 1];
	memset(m, 0, sizeof(m));
	for(i = 1;i <= n;i++){
		m[i][i] = i;
	}
	for(int j = 1;j <= n;j++){
		for(int k = j + 1;k <= n;k++){
			if(j == k)continue;
			else{
				m[k][j] = i;
				m[j][k] = i + 1;
				i += 2;
			}
		}
	}
	bool flag = true;
	for(int i = 1;i <= n && flag;i++){
		for(int j = 1;j <= n && flag;j++){
			if(i > 1)
				if(abs(m[i][j] - m[i - 1][j]) == 1)flag = false;
			if(j > 1)
				if(abs(m[i][j] - m[i][j - 1]) == 1)flag = false;
			if(i < n)
				if(abs(m[i][j] - m[i + 1][j]) == 1)flag = false;
			if(j < n)
				if(abs(m[i][j] - m[i][j + 1]) == 1)flag = false;
			
		}
	}
	if(!flag)cout << "-1\n";
	else{
		for(int i = 1;i <= n;i++){
			for(int j = 1;j <= n;j++){
				cout << m[i][j] << " ";
			}
			cout << endl;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

