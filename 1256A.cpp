#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	long long int a, b, n, s;
	cin >> a >> b >> n >> s;
	long long int all = a * n + b;
	if(b >= (n - 1)){
		if(s <= all)cout << "YES\n";
		else cout << "NO\n";
	}
	else{
		if(s <= all){
			if(s % n <= b)cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

