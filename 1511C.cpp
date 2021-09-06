#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n, q;
	cin >> n >> q;
	map<int, int> m;
	for(int i = 1;i <= n;i++){
		int t;
		cin >> t;
		if(!m[t])m[t] = i;
	}
	for(int i = 0;i < q;i++){
		int t;
		cin >> t;
		if(m[t]){
			cout << m[t] << " ";
			for(auto x:m){
				if(x.second < m[t])m[x.first]++;
			}
			m[t] = 1;
		}
	}
	cout << endl;
}

int main(){
	solve();
	return 0;
}

