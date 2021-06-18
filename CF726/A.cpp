#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, temp, remain = 0;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> temp;
		remain += temp;
	}
	if(remain == n)cout << "0" << endl;
	else if(remain > n)cout << abs(remain - n) << endl;
	else if(remain > 0)cout << 1 << endl;
	else cout << 1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

