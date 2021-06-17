#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n;
	long long int t;
	cin >> n >> t;
	int a[n], b[n], s[n];
	for(int i = 0;i < n;i++){
		cin >> a[i];
		b[i] = 0;
		s[i] = 0;
	}
	int sum = 0;
	for(int i = 0;i < 1;i++){
		int j = i;
		for(;j < n;j++){
			if(s[i] + a[j] > t)break;
			s[i] += a[j];
			b[i]++;
		}
	}
	for(int i = 1;i < n;i++){
		int j = i + b[i - 1] - 1;
		s[i] = s[i - 1] - a[i - 1];
		b[i] = b[i - 1] - 1;
		for(;j < n;j++){
			if(s[i] + a[j] > t)break;
			s[i] += a[j];
			b[i]++;
		}
	}
	for(int i = 0;i < n;i++)sum = sum > b[i] ? sum : b[i];
	cout << sum << endl;
}

int main(){
	solve();
	return 0;
}

