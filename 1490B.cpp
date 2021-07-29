#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n, sum = 0;
	cin >> n;
	int a[3] = {n / 3, n / 3, n / 3};
	int t;
	for(int i = 0;i < n;i++){
		cin >> t;
		a[t % 3]--;
	}
//	cout << "a[0] = " << a[0] << ", a[1] = " << a[1] << ", a[2] = " << a[2] << endl;
	int i = 0;
	while(a[0] != 0 || a[1] != 0 || a[2] != 0){
		if(a[i] < 0){
		sum += abs(a[i]);
		a[(i + 1) % 3] += a[i];
		a[i] = 0;
		//cout << "a[" << i << "] = " << a[i] << endl;
		}
		i = (i + 1) % 3;
	}
	/*
	sum += abs(a[0]);
	a[1] += a[0];
	sum += abs(a[1]);
	a[2] += a[1];
	sum += abs(a[2]);
	a[0] += a[2];
	*/
	cout << sum << endl;
//	cout << "a[0] = " << a[0] << ", a[1] = " << a[1] << ", a[2] = " << a[2] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

