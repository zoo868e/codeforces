#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int x, sum = 0;
	cin >> x;
	while(x > 0){
		sum += x % 2;
		x = x / 2;
	}
	cout << sum << endl;
}

int main(){
	solve();
	return 0;
}

