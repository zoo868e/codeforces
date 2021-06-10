#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;


long long int f(long long int a){
	long long int ret = 0;
	int i = 2;
	while(a > 1 && i <= sqrt(a)){
		while(a % i == 0){
			ret += 1;
			a = a / i;
		}
		i++;
	}
	if(a > 1)ret += 1;
	return ret;
}

void solve(){
	long long int a, b, k;
	cin >> a >> b >> k;
	if(a > b)swap(a, b);
	if(k == 1){
		if(b > a && b % a == 0){
			cout << "YES\n";
			return;
		}
		else{
			cout << "NO\n";
			return;
		}
	}
	long long int f1 = f(a) + f(b);
	if(k <= f1 && k >= 2)cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

