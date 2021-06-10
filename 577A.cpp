#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, x;
	cin >> n >> x;
	int sum = 0;
	if(x == 1){
		cout << 1 << endl;
		return;
	}
	else if(pow(n, 2) < x){
		cout << 0 << endl;
		return;
	}
	else if(pow(n, 2) == x){
		cout << 1 << endl;
		return;
	}
	for(int i = 1;i <= n;i++){
		if(!(x % i) && (x / i) <= n)sum++;
	}
	cout << sum << endl;
}

int main(){
	solve();
	return 0;
}

