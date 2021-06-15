#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

int n1(int a){
	int ret = 0;
	while(a > 0){
		if(a % 2)
			ret++;
		a = a / 2;
	}
	return ret;
}

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	int x[m];
	for(int i = 0;i < m;i++)cin >> x[i];
	int F, ret = 0;
	cin >> F;
	for(int i = 0;i < m;i++){
		if(n1(F^x[i]) <= k)
			ret += 1;
	}
	cout << ret << endl;
}

int main(){
	solve();
	return 0;
}

