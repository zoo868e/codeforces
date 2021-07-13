#include"bits/stdc++.h"

using namespace std;

void solve(){
	string t;
	cin >> t;
	int i = 1, head = t[0] - '0';
	while(t[i] && !(t[i] ^ t[i - 1])){
		i++;
	}
	if(i == (int)t.size()){
		cout << t << endl;
		return ;
	}
	i = 0;
	while(t[i]){
		cout << head % 2;
		if(t[i] - '0' != head % 2)cout <<  t[i] - '0';
		else head++;
		i++;
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

