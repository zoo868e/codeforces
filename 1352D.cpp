#include"bits/stdc++.h"
#define ll long long int

using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> a;
	a.resize(n);
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	int player[2];
	memset(player, 0, sizeof(player));
	player[0] = a[0];
	int i = 1, t = 0, pre = a[0];
	a.erase(a.begin());
	while(a.size() > 0){
		if(i % 2){
			t += a[a.size() - 1];
			a.pop_back();
		}
		else{
			t += a[0];
			a.erase(a.begin());
		}
		if(t > pre){
			pre = t;
			player[i % 2] += t;
			i++;
			t = 0;
		}
	}
	if(t){
		player[i % 2] += t;
		i++;
	}
	cout << i << " " << player[0] << " " << player[1] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

