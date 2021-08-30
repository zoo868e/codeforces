#include"bits/stdc++.h"
#define ll long long int

using namespace std;
const int N = 50000;

bool g(int n){
	for(int i = 2;i < min(N, n);i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

void solve(){
	int n;
	cin >> n;
	bool flag = (n == 1);
	if(n > 2 && n % 2 == 0){
		if((n & (n - 1)) == 0) 	// check if the int n is power of 2
			flag = true;
		else if(n % 4 != 0 && g(n / 2))
			flag = true;
	}
	if(!flag)cout << "Ashishgup\n";
	else cout << "FastestFinger\n";
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

