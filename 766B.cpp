#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	ll a[n];
	for(int i = 0;i < n;i++)cin >> a[i];
	sort(a, a + n);
	int A = 0, B = 1, C = 2;
	while(a[A] + a[B] <= a[C]){
		A++;
		if(A == B){
			B++;
			A = 0;
		}
		if(B == C){
			C++;
			B = 1;
		}
		if(C == n){
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}

int main(){
	solve();
	return 0;
}

