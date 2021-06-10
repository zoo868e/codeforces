#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	long long int x, y, a, b;
	cin >> x >> y >> a >> b;
	if(b > 2 * a)b = 2 * a;
	long long int sum = 0;
	long long int temp = max(x, y), temp2 = min(x, y);
	sum += a * (2 * temp - x - y);
	sum += temp2 * b;
	cout << sum << endl;
}

int main(){
	long long int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

