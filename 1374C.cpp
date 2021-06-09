#include<iostream>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int n;
	string s;
	cin >> n >> s;
	int r = 0, sum = 0;
	for(int i = 0;i < n;i++){
		if(s[i] == ')'){
			if(r)r--;
			else sum++;
		}
		if(s[i] == '(')r++;
	}
	cout << sum << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

