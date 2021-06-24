#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	long long int a, b;
	cin >> a >> b;
	if(a < b)swap(a, b);
	if(a > 2*b){
		cout << b << endl;
	}
	else{
		long long int ret = 0, dis = a - b;
		ret += dis;
		a -= dis * 2;
		b -= dis;
		ret += 2 * (a / 3);
		a %= 3;
		b %= 3;
		if(a > 1)ret += 1;
		cout << ret << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

