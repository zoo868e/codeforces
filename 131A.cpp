#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	string s;
	cin >> s;
	bool is = true;
	for(int i = 1;i < (int)s.size();i++)
		if(islower(s[i]))is = false;
	if(is){
		int dis = 'a' - 'A';
		for(int i = 0;i < (int)s.size();i++){
			if(s[i] >= 'a')s[i] -= dis;
			else s[i] += dis;
		}
	}
	cout << s << endl;
}

int main(){
	solve();
	return 0;
}

