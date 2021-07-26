#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	int a[2 * n], odd = 0, even = 0;
	for(int i = 0;i < 2 * n;i++){
		cin >> a[i];
	}
	int l = n - 1;
	for(int i = 0, j = 0;i < 2 * n && j < l;i++){
		if(a[i] % 2){
			if(odd){
				cout << odd << " " << i + 1 << endl;
				odd = 0;
				j++;
			}
			else odd = i + 1;
		}
		else{
			if(even){
				cout << even << " " << i + 1 << endl;
				even = 0;
				j++;
			}
			else even = i + 1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

