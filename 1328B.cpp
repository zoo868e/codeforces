#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

long long int a[100000];

void solve(){
	int n, m;
	cin >> n >> m;
	int pos, pos2;
	for(pos = 0;a[pos] < m;pos++);
//	cout << "pos = " << pos << ", a[" << pos << "] = " << a[pos] << endl;
	if(m == a[pos - 1])m = 0;
	else
		m = m - a[pos] + pos - 1;
	pos2 = m;
//	cout << "pos = " << pos << ", pos2 = " << pos2 << endl;
	
	for(int i = n - 1;i >= 0;i--){
		if(i == pos || i == pos2)cout << "b";
		else cout << "a";
	}
	cout << endl;
	
}

int main(){
	for(int i = 1;i < 100000;i++){
		a[i] = a[i - 1] + i;
	}
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

