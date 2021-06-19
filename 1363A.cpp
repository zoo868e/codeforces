#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<cstdlib>
#include<vector>

using namespace std;

void solve(){
	int x, n;
	cin >> n >> x;
	int odd = 0, even = 0, temp;
	for(int i = 0;i < n;i++){
		cin >> temp;
		if(temp % 2)odd++;
		else even++;
	}
//	cout << "x = " << x << ", #odd = " << odd << ", #even = " << even << endl;
	x = x - 1;
	odd--;
	if(odd == -1)cout << "NO\n";
	else{
		if(x % 2){
			if(even > 0){
				even--;
				x--;
			}
			else {
				cout << "NO\n";
				return;
			}
		}
		x -= (odd / 2) * 2;
		if(x > even)cout << "NO\n";
		else cout << "YES\n";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}

