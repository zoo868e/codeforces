#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	string s;
	cin >> s;
	int i = 0, l = s.size();
	if(s[i] == '9')i++;
	for(;i < l;i++){
		if(s[i] < '5')continue;
		else s[i] = '9' - s[i] + '0';
	}
	cout << s << endl;
}

int main(){
	solve();
	return 0;
}

