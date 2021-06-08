#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n, t, temp;
	cin >> n >> t;
	vector<int> a;
	a.push_back(0);
	for(int i = 0;i < (int)n - 1;i++){
		cin >> temp;
		a.push_back(temp);
	}
	temp = 1;
	while(temp < t){
		temp = temp + a[temp];
	}
	if(temp == t)cout << "YES\n";
	else cout << "NO\n";
}

int main(){
	solve();
	return 0;
}

