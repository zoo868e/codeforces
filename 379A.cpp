#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int a, b, l = 0, m;
	cin >> a >> b;
	int sum = a;
	while(a >= b){
		m = a / b;
		sum += m;
		l = a % b;
		a = m + l;
	}
	cout << sum << endl;
}

int main(){
	solve();
	return 0;
}

