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
	if(b == 1){
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	if(b > 2)
		cout << a << " " << a*(b - 1) << " " << a*b << endl;
	else
		cout << a << " " << a*(2*b - 1) << " " << a*b*2 << endl;
}

int main(){
	long long int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

