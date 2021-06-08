#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, m, a, b;
	int ret = 0;
	cin >> n >> m >> a >> b;
	if((float)b / m < a){
		ret += (n / m) * b;
		n = n % m;
		if(n * a < b)
			ret += n * a;
		else
			ret += b;
	}
	else{
		ret += n * a;
	}
	cout << ret << endl;
}

int main(){
	solve();
	return 0;
}

