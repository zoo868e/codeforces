#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void pline(int total, int now){
	int end = now == 0 ? 1:0;
	for(int i = 0;i < 2 * total + 1;i++){
		if(abs(total - i) <= now){
			cout << now - abs(total - i);
			if(now - abs(total - i) == 0)end += 1;
		}
		else cout << " ";
		if(end == 2)break;
		else cout << " ";
	}
	cout << endl;
}

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		pline(n, i);
	}
	for(int i = 0;i < n;i++)cout << i << " ";
	for(int i = n;i > 0;i--)cout << i << " ";
	cout << 0 << endl;
	for(int i = n - 1;i >= 0;i--){
		pline(n, i);
	}
}

int main(){
	solve();
	return 0;
}

