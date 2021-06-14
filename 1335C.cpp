#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, m = 0, temp;
	int sum = 0;
	cin >> n;
	int a[n + 1];
	for(int i = 0;i <=n;i++)a[i] = 0;
	for(int i = 0;i < n;i++){
		cin >> temp;
		if(!a[temp])sum++;
		a[temp]++;
		if(a[temp] > a[m])m = temp;
	}
	if(sum > a[m])cout << a[m] << endl;
	else if(sum == a[m])cout << sum - 1 << endl;
	else cout << sum << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

