#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, m, k;
	cin >> n >> m >> k;
	int hand = n / k;
	int ret = m > hand ? hand:m;
	int remain = m - ret;
	ret -= remain / (k - 1);
	if(remain % (k - 1))cout << ret - 1 << endl;
	else cout << ret << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

