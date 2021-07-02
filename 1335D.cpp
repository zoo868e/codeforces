#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int i = 0;
	string map[9];
	for(;i < 9;i++){
		cin >> map[i];
	}
	for(i = 0;i < 9;i++){
		if(map[i][(i % 3) * 3 + i / 3] == '1')
			map[i][(i % 3) * 3 + i / 3] = '2';
		else
			map[i][(i % 3) * 3 + i / 3] = '1';
	}
	for(int i = 0;i < 9;i++)
		cout << map[i] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

