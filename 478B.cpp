#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

long long int friends(long long int i){
	return i * (i - 1) / 2;
}

void solve(){
	long long int n, m;
	cin >> n >> m;
	long long int a, b;
	b = friends(n - m + 1);
	if(n % m){
		a = (n % m) * friends(n / m + 1) + (m - n % m) * friends(n / m);
	}
	else{
		a = m * friends(n / m);
	}
	cout << a << " " << b << endl;
}

int main(){
	solve();
	return 0;
}

