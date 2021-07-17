#include"bits/stdc++.h"

using namespace std;

void solve(){
	int n, t;
	cin >> n;
	int a[2];
	bool flag = true;
	memset(a, 0, sizeof(a));
	for(int i = 0;i < n;i++){
		cin >> t;
		if(t == 25)a[0]++;
		else if(t == 50){
			if(a[0] > 0){
				a[0]--;
				a[1]++;
			}
			else{
				flag = false;
			}
		}
		else{
			if(a[1] > 0){
				if(a[0] > 0){
					a[1]--;
					a[0]--;
				}
				else{
					flag = false;
				}
			}
			else{
				if(a[0] > 2){
					a[0] -= 3;
				}
				else{
					flag = false;
				}
			}
		}
	}
	if(flag)cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	solve();
	return 0;
}

