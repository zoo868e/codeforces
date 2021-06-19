#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

int ans[4] = {6, 8, 4, 2};

void solve(){
	int n;
	cin >> n;
	if(n == 0)cout << "1\n";
	else{
		cout << ans[n % 4] << endl;
	}
}

int main(){
	solve();
	return 0;
}

