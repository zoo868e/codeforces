#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, k;
	cin >> n >> k;
	int dis = n - 1;
	if(k <= dis){
		cout << k << endl;
	}
	else{
		int a = k / dis;
		if(k % dis)
			cout << a * n + k % (n - 1) << endl;
		else
			cout << a * n - 1 << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

