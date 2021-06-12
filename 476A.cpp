#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<cmath>

using namespace std;

int main(){
	int n, m;
	int one, two;
	cin >> n >> m;
	if(n < m)cout << -1 << endl;
	else if(n == m)cout << n << endl;
	else{
		two = n / 2;
		one = n % 2;
		int sum = two + one;
		if(!(sum % m))cout << sum << endl;
		else if(sum % m && (m*(sum/m + 1) <= n))cout << m*(sum / m + 1) << endl;
		else cout << -1 << endl;
	}
	return 0;
}
